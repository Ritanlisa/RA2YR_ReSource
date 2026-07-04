#include "warheadtypeclass.hpp"

void  WarheadTypeClass::_vt03(int this)
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

unsigned int  WarheadTypeClass::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

int  WarheadTypeClass::_vt06(uint32_t *this, int a2)
{
    return *(uint32_t *)(*(this + 1) + 4 * a2);
}

uint32_t * WarheadTypeClass::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<AnimTypeClass const *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char  WarheadTypeClass::_vt01(int *this, int a2)
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

char  WarheadTypeClass::_vt02(void *this, int a2, uint32_t *a3)
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

int  WarheadTypeClass::_vt04(int *this, uint32_t *a2)
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

void * WarheadTypeClass::sub_52AD50(void *Block, char a2)
{
    void *v3; // eax
    int v4; // eax
    int v5; // edi
    int v6; // ecx
    int v7; // eax
    void *v9; // [esp-8h] [ebp-10h]
    v3 = (void *)*((uint32_t *)Block + 3);
    *(uint32_t *)Block = &INIClass::INIEntry::`vftable';
    free(v3);
    v9 = (void *)*((uint32_t *)Block + 4);
    *((uint32_t *)Block + 3) = 0;
    free(v9);
    v4 = *((uint32_t *)Block + 5);
    *((uint32_t *)Block + 4) = 0;
    if ( v4 )
    do
    free(**((void ***)Block + 5));
    v5 = *(uint32_t *)(*((uint32_t *)Block + 5) + 4);
    __3_YAXPAX_Z(*((void **)Block + 5));
    *((uint32_t *)Block + 5) = v5;
    while ( v5 );
    free(*((void **)Block + 6));
    *((uint32_t *)Block + 6) = 0;
    *(uint32_t *)Block = &GenericNode::`vftable';
    if ( Block )
    v6 = *((uint32_t *)Block + 1);
    if ( v6 )
    v7 = *((uint32_t *)Block + 2);
    if ( v7 )
    *(uint32_t *)(v7 + 4) = v6;
    *(uint32_t *)(*((uint32_t *)Block + 1) + 8) = *((uint32_t *)Block + 2);
    *((uint32_t *)Block + 2) = 0;
    *((uint32_t *)Block + 1) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char * WarheadTypeClass::sub_52AE00(char *Block, char a2)
{
    WarheadTypeClass::parseVerses(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * WarheadTypeClass::sub_52AFC0(uint32_t *Block, char a2)
{
    int v3; // eax
    int v4; // ecx
    int v5; // edx
    int v6; // edx
    int v7; // ecx
    int v8; // edx
    int v9; // ecx
    *Block = &GenericList::`vftable';
    while ( 1 )
    v3 = *(Block + 2);
    if ( !v3 )
    break;
    if ( !*(uint32_t *)(v3 + 4) )
    break;
    v4 = *(uint32_t *)(v3 + 8);
    if ( !v4 )
    break;
    v5 = *(uint32_t *)(v3 + 4);
    if ( v5 )
    *(uint32_t *)(v4 + 4) = v5;
    *(uint32_t *)(*(uint32_t *)(v3 + 4) + 8) = *(uint32_t *)(v3 + 8);
    *(uint32_t *)(v3 + 8) = 0;
    *(uint32_t *)(v3 + 4) = 0;
    *(Block + 4) = &GenericNode::`vftable';
    if ( Block != (uint32_t *)-16 )
    v6 = *(Block + 5);
    if ( v6 )
    v7 = *(Block + 6);
    if ( v7 )
    *(uint32_t *)(v7 + 4) = v6;
    *(uint32_t *)(*(Block + 5) + 8) = *(Block + 6);
    *(Block + 6) = 0;
    *(Block + 5) = 0;
    *(Block + 1) = &GenericNode::`vftable';
    if ( Block != (uint32_t *)-4 )
    v8 = *(Block + 2);
    if ( v8 )
    v9 = *(Block + 3);
    if ( v9 )
    *(uint32_t *)(v9 + 4) = v8;
    *(uint32_t *)(*(Block + 2) + 8) = *(Block + 3);
    *(Block + 3) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

// 0x0075DEC0
int  WarheadTypeClass::ProcessPower(int this, int *a2)
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
    int v17; // ecx
    uint32_t *v18; // ebx
    int v20; // [esp+Ch] [ebp-4h]
    v3 = AbstractTypeClass::ProcessPower((char *)this, a2);
    LOBYTE(v3) = *(uint8_t *)(this + 324);
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = *(uint8_t *)(this + 327);
    Power::FlagProcess(a2, v4);
    LOBYTE(v5) = *(uint8_t *)(this + 328);
    v6 = Power::FlagProcess(a2, v5);
    LOBYTE(v6) = *(uint8_t *)(this + 329);
    Power::FlagProcess(a2, v6);
    LOBYTE(v7) = *(uint8_t *)(this + 330);
    Power::FlagProcess(a2, v7);
    LOBYTE(v8) = *(uint8_t *)(this + 331);
    v9 = Power::FlagProcess(a2, v8);
    LOBYTE(v9) = *(uint8_t *)(this + 332);
    Power::FlagProcess(a2, v9);
    LOBYTE(v10) = *(uint8_t *)(this + 333);
    Power::FlagProcess(a2, v10);
    LOBYTE(v11) = *(uint8_t *)(this + 334);
    v12 = Power::FlagProcess(a2, v11);
    LOBYTE(v12) = *(uint8_t *)(this + 335);
    Power::FlagProcess(a2, v12);
    LOBYTE(v13) = *(uint8_t *)(this + 336);
    Power::FlagProcess(a2, v13);
    LOBYTE(v14) = *(uint8_t *)(this + 337);
    v15 = Power::FlagProcess(a2, v14);
    LOBYTE(v15) = *(uint8_t *)(this + 338);
    Power::FlagProcess(a2, v15);
    LOBYTE(v16) = *(uint8_t *)(this + 339);
    Power::FlagProcess(a2, v16);
    Checksummer::Add_double(*(uint32_t *)(this + 152), *(uint32_t *)(this + 156));
    Power::TimerProcess(*(uint32_t *)(this + 256));
    Checksummer::Add_double(*(uint32_t *)(this + 248), *(uint32_t *)(this + 252));
    LOBYTE(v17) = *(uint8_t *)(this + 379);
    Power::FlagProcess(a2, v17);
    Power::TimerProcess(*(uint32_t *)(this + 380));
    Power::TimerProcess(*(uint32_t *)(this + 384));
    Power::TimerProcess(*(uint32_t *)(this + 388));
    Power::TimerProcess(*(uint32_t *)(this + 392));
    Checksummer::Add_Buffer((unsigned int *)a2, (unsigned __int8 *)(this + 348), 16);
    v18 = (uint32_t *)(this + 160);
    v20 = 11;
    do
    Checksummer::Add_double(*v18, v18[1]);
    v18 += 2;
    --v20;
    while ( v20 );
    Power::TimerProcess(*(uint32_t *)(this + 276));
    return Power::TimerProcess(*(uint32_t *)(this + 288));
}

int __stdcall WarheadTypeClass::vt_03_(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = -1463464540;
    a2[1] = 298979195;
    a2[2] = 1610642049;
    a2[3] = -1252326136;
    return 0;
}

// 0x0075E0C0
int __stdcall WarheadTypeClass::SaveLoad_Prefix(uint32_t *a1, int a2)
{
    uint32_t *v2; // edi
    uint32_t *v3; // ebp
    int v4; // esi
    int result; // eax
    int i; // ebx
    int j; // ebx
    int k; // ebx
    int m; // esi
    int n; // esi
    v2 = a1;
    v3 = a1 + 99;
    (*(void (__thiscall **)(uint32_t *))(a1[99] + 12))(a1 + 99);
    (*(void (__thiscall **)(uint32_t *))(v2[106] + 12))(v2 + 106);
    v4 = a2;
    result = AbstractClass::SaveLoad_Prefix_0(v2, a2);
    if ( result >= 0 )
    if ( v2 )
    AbstractTypeClass::Init((int)v2, (int)&a1);
    DynamicVectorClass::AnimTypeConstructor(v2 + 65, 0, 0);
    v2[65] = &TypeList<AnimTypeClass const *>::`vftable';
    WarheadTypeClass::checkImmunity(v3, (int)&a1);
    WarheadTypeClass::calculateDamage(v2 + 106, (int)&a1);
    *v2 = &WarheadTypeClass::`vftable';
    v2[1] = &WarheadTypeClass::`vftable';
    v2[2] = &WarheadTypeClass::`vftable';
    v2[3] = &WarheadTypeClass::`vftable';
    if ( v2 != (uint32_t *)-260 )
    DynamicVectorClass::AnimTypeConstructor(v2 + 65, 0, 0);
    v2[65] = &TypeList<AnimTypeClass const *>::`vftable';
    (*(void (__stdcall **)(int, uint32_t **, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &a1, 4, 0);
    for ( i = 0; i < (int)a1; ++i )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &a2, 4, 0);
    DynamicVector::Add_Alt4(v2 + 65, &a2);
    if ( v3 )
    TypeList::VoxelAnimConstructor(v3);
    (*(void (__stdcall **)(int, uint32_t **, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &a1, 4, 0);
    for ( j = 0; j < (int)a1; ++j )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &a2, 4, 0);
    DynamicVector::Add2(v3, &a2);
    if ( v2 != (uint32_t *)-424 )
    TypeList::Construct(v2 + 106);
    (*(void (__stdcall **)(int, uint32_t **, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &a1, 4, 0);
    for ( k = 0; k < (int)a1; ++k )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &a2, 4, 0);
    DynamicVector::Add_Alt(v2 + 106, &a2);
    for ( m = 0; m < v2[69]; ++m )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2[66] + 4 * m));
    for ( n = 0; n < v2[103]; ++n )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2[100] + 4 * n));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 80);
    return 0;
    return result;
}

// 0x0075E2C0
int __userpurge WarheadTypeClass::SaveLoad_Prefix_0@<eax>(int a1@<ebx>, int *a2, int *a3, int a4, int a5)
{
    int result; // eax
    int v6; // edx
    int i; // ebx
    int v8; // edx
    int j; // ebx
    int v10; // edx
    int k; // ebx
    result = AbstractClass::SaveLoad_Prefix(a2, a3, a4);
    if ( result >= 0 )
    v6 = *a3;
    a4 = a2[69];
    (*(void (__stdcall **)(int *, int *, int, uint32_t, int))(v6 + 16))(a3, &a4, 4, 0, a1);
    for ( i = 0; i < a5; ++i )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[66] + 4 * i, 4, 0);
    v8 = *a3;
    a5 = a2[103];
    (*(void (__stdcall **)(int *, int *, int, uint32_t))(v8 + 16))(a3, &a5, 4, 0);
    for ( j = 0; j < a5; ++j )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[100] + 4 * j, 4, 0);
    v10 = *a3;
    a5 = a2[110];
    (*(void (__stdcall **)(int *, int *, int))(v10 + 16))(a3, &a5, 4);
    for ( k = 0; k < a4; ++k )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[107] + 4 * k, 4, 0);
    return 0;
    return result;
}

int  WarheadTypeClass::_vt10(uint32_t *this, int a2, int a3)
{
    int v3; // eax
    uint32_t *v4; // esi
    int result; // eax
    int v6; // ecx
    int v7; // ecx
    v3 = a2;
    if ( a2 == *(this + 80) )
    *(this + 80) = 0;
    v4 = this + 65;
    a2 = v3;
    result = (*(int (__thiscall **)(uint32_t *, int *))(*(this + 65) + 16))(this + 65, &a2);
    if ( result != -1 )
    v6 = v4[4];
    if ( result < v6 )
    v7 = v6 - 1;
    for ( v4[4] = v7; result < v4[4]; *(uint32_t *)(v4[1] + 4 * result - 4) = *(uint32_t *)(v4[1] + 4 * result) )
    ++result;
    return result;
}

int WarheadTypeClass::_vt12()
{
    return 464;
}

int WarheadTypeClass::_vt11()
{
    return 50;
}

void ** WarheadTypeClass::vt_08_(void **Block, char a2)
{
    int v3; // eax
    int v4; // eax
    void *v5; // eax
    void *v6; // eax
    void *v7; // eax
    void **v9; // [esp+4h] [ebp-4h] BYREF
    *Block = &WarheadTypeClass::`vftable';
    *(Block + 1) = &WarheadTypeClass::`vftable';
    *(Block + 2) = &WarheadTypeClass::`vftable';
    *(Block + 3) = &WarheadTypeClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block);
    v9 = Block;
    v3 = (*(int (__thiscall **)(WarheadTypeClass **, void ***))&WarheadTypeClass_Array->gap0[16])(
    &WarheadTypeClass_Array,
    &v9);
    if ( v3 != -1 && v3 < g_WarheadTypePool && v3 < --g_WarheadTypePool )
    do
    ++v3;
    *((uint32_t *)dword_8874C4 + v3 - 1) = *((uint32_t *)dword_8874C4 + v3);
    while ( v3 < g_WarheadTypePool );
    v9 = Block;
    v4 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v9);
    if ( v4 != -1 && v4 < g_AnimManager && v4 < --g_AnimManager )
    do
    ++v4;
    *((uint32_t *)g_AnimPoolCount + v4 - 1) = *((uint32_t *)g_AnimPoolCount + v4);
    while ( v4 < g_AnimManager );
    v5 = *(Block + 107);
    *(Block + 106) = &VectorClass<int>::`vftable';
    if ( v5 && *((uint8_t *)Block + 437) )
    __3_YAXPAX_Z(v5);
    *(Block + 107) = 0;
    *((uint8_t *)Block + 437) = 0;
    *(Block + 108) = 0;
    v6 = *(Block + 100);
    *(Block + 99) = &VectorClass<VoxelAnimTypeClass const *>::`vftable';
    if ( v6 && *((uint8_t *)Block + 409) )
    __3_YAXPAX_Z(v6);
    *(Block + 100) = 0;
    *((uint8_t *)Block + 409) = 0;
    *(Block + 101) = 0;
    v7 = *(Block + 66);
    *(Block + 65) = &VectorClass<AnimTypeClass const *>::`vftable';
    if ( v7 && *((uint8_t *)Block + 273) )
    __3_YAXPAX_Z(v7);
    *(Block + 66) = 0;
    *((uint8_t *)Block + 273) = 0;
    *(Block + 67) = 0;
    AbstractTypeClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

