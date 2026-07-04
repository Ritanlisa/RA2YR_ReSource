#include "radioclass.hpp"

uint32_t * RadioClass::RadioClass(uint32_t *this)
{
    RadioClass::Constructor((int)this);
    *(this + 57) = 0;
    *(this + 58) = 1;
    *((uint8_t *)this + 236) = 1;
    *((uint8_t *)this + 237) = 0;
    *(this + 56) = &VectorClass<TechnoClass *>::`vftable';
    *(this + 57) = __2_YAPAXI_Z(4u);
    *((uint8_t *)this + 237) = 1;
    *this = &RadioClass::`vftable';
    *(this + 1) = &RadioClass::`vftable';
    *(this + 2) = &RadioClass::`vftable';
    *(this + 3) = &RadioClass::`vftable';
    *(uint32_t *)*(this + 57) = 0;
    *(this + 53) = 0;
    *(this + 54) = 0;
    *(this + 55) = 0;
    return this;
}

int  RadioClass::_vt53(#374 *this)
{
    if ( !*((uint8_t *)this + 129) )
    (*(void (__thiscall **)(void*374 *, int))(*(uint32_t *)this + 640))(this, 3);
    return ObjectClass::Undeploy(this);
}

int  RadioClass::_vt10(int this, int a2, char a3)
{
    int result; // eax
    int i; // ecx
    int v6; // eax
    int v7; // edx
    uint32_t *v8; // eax
    Object::Unlink((void*374 *)this);
    result = *(uint32_t *)(this + 232);
    for ( i = 0; i < result; ++i )
    v6 = *(uint32_t *)(this + 228);
    v7 = *(uint32_t *)(v6 + 4 * i);
    v8 = (uint32_t *)(v6 + 4 * i);
    if ( v7 == a2 )
    if ( a3 )
    *v8 = 0;
    result = *(uint32_t *)(this + 232);
    return result;
}

int  RadioClass::_vt13(int *this, int a2)
{
    int result; // eax
    int i; // edi
    int v5; // eax
    int v6; // eax
    int v7; // ecx
    int v8; // eax
    AbstractClass::COMStub_13((int)this, a2);
    Power::TimerProcess(*(this + 58));
    result = *(this + 58);
    for ( i = 0; i < result; ++i )
    v5 = *(uint32_t *)(*(this + 57) + 4 * i);
    if ( v5 )
    v6 = (*(int (__stdcall **)(int))(*(uint32_t *)(v5 + 4) + 16))(v5 + 4);
    Power::TimerProcess(v6);
    v7 = *(uint32_t *)(*(this + 57) + 4 * i);
    v8 = (*(int (__thiscall **)(int))(*(uint32_t *)v7 + 44))(v7);
    Power::TimerProcess(v8);
    result = *(this + 58);
    return result;
}

int  RadioClass::_vt05(#374 *this, int a2, int a3)
{
    int v3; // ebp
    int v4; // edi
    int result; // eax
    int v6; // esi
    int v7; // esi
    int v8; // eax
    int v9; // esi
    v3 = a2;
    v4 = a3;
    result = BuildingClass::SaveLoad_Register(this);
    if ( result >= 0 )
    v6 = v3 + 224;
    if ( v3 != -224 )
    *(uint32_t *)(v3 + 228) = 0;
    *(uint32_t *)(v3 + 232) = 0;
    *(uint8_t *)(v3 + 236) = 1;
    *(uint8_t *)(v3 + 237) = 0;
    *(uint32_t *)v6 = &VectorClass<TechnoClass *>::`vftable';
    result = (*(int (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &a3, 4, 0);
    if ( result >= 0 )
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)v6 + 8))(v3 + 224, a3, 0);
    v7 = 0;
    v8 = a3;
    if ( a3 <= 0 )
    LABEL_8:
    v9 = 0;
    if ( v8 > 0 )
    do
    ObjectPtr::RegisterForTracking(
    (int)&SwizzleManagerClass_Instance,
    (int *)(*(uint32_t *)(v3 + 228) + 4 * v9++));
    while ( v9 < a3 );
    return 0;
    else
    while ( 1 )
    result = (*(int (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &a2, 4, 0);
    if ( result < 0 )
    break;
    *(uint32_t *)(*(uint32_t *)(v3 + 228) + 4 * v7) = a2;
    v8 = a3;
    if ( ++v7 >= a3 )
    goto LABEL_8;
    return result;
}

int __stdcall RadioClass::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    int v4; // edx
    int v5; // ebx
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    v4 = *a2;
    a3 = a1[58];
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v4 + 16))(a2, &a3, 4, 0);
    if ( result >= 0 )
    v5 = 0;
    if ( a3 <= 0 )
    return 0;
    else
    while ( 1 )
    result = (*(int (__stdcall **)(int *, int, int, uint32_t))(*a2 + 16))(a2, a1[57] + 4 * v5, 4, 0);
    if ( result < 0 )
    break;
    if ( ++v5 >= a3 )
    return 0;
    return result;
}

int  RadioClass::FindLinkIndex(int *this, int a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    if ( !a2 )
    return -1;
    v2 = *(this + 58);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 57); *i != a2; ++i )
    if ( ++result >= v2 )
    return -1;
    return result;
}

char  RadioClass::HasFreeLink(int *this)
{
    int v1; // edx
    int v2; // eax
    uint32_t *i; // ecx
    v1 = *(this + 58);
    v2 = 0;
    if ( v1 <= 0 )
    return 0;
    for ( i = (uint32_t *)*(this + 57); *i; ++i )
    if ( ++v2 >= v1 )
    return 0;
    return 1;
}

void  RadioClass::SetLinkCount(uint32_t *this, int a2)
{
    int v3; // ebx
    int v4; // eax
    v3 = *(this + 58);
    if ( a2 > v3 )
    (*(void (__thiscall **)(uint32_t *, int, uint32_t))(*(this + 56) + 8))(this + 56, a2, 0);
    v4 = v3;
    do
    ++v4;
    *(uint32_t *)(*(this + 57) + 4 * v4 - 4) = 0;
    while ( v4 < a2 );
}

uint32_t * RadioClass::_vt08(uint32_t *Block, char a2)
{
    void *v3; // eax
    *Block = &RadioClass::`vftable';
    *(Block + 1) = &RadioClass::`vftable';
    *(Block + 2) = &RadioClass::`vftable';
    *(Block + 3) = &RadioClass::`vftable';
    v3 = (void *)*(Block + 57);
    *(Block + 56) = &VectorClass<TechnoClass *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 237) )
    __3_YAXPAX_Z(v3);
    *(Block + 57) = 0;
    *((uint8_t *)Block + 237) = 0;
    *(Block + 58) = 0;
    *Block = &MissionClass::`vftable';
    *(Block + 1) = &MissionClass::`vftable';
    *(Block + 2) = &MissionClass::`vftable';
    *(Block + 3) = &MissionClass::`vftable';
    ObjectClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

