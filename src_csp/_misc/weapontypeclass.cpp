#include "weapontypeclass.hpp"

uint32_t * WeaponTypeClass::Constructor(uint32_t *this, char *Source)
{
    int v3; // eax
    AbstractTypeClass::Constructor((int)this, Source);
    *(this + 38) = 0;
    *(this + 39) = 1;
    *(this + 40) = 0;
    *(this + 41) = 0;
    *(this + 42) = 0;
    *(this + 43) = 0;
    *(this + 44) = 0;
    *(this + 45) = 0;
    *(this + 46) = 0;
    VectorClass::Construct(this + 47, 0, 0);
    *(this + 52) = 10;
    *(this + 51) = 0;
    *(this + 47) = &TypeList<int>::`vftable';
    VectorClass::Construct(this + 54, 0, 0);
    *(this + 59) = 10;
    *(this + 58) = 0;
    *(this + 54) = &TypeList<int>::`vftable';
    AnimTypeVector::Constructor(this + 61, 0, 0);
    *(this + 66) = 10;
    *(this + 65) = 0;
    *(this + 61) = &TypeList<AnimTypeClass const *>::`vftable';
    *(this + 68) = 0;
    *(this + 69) = 0;
    *(this + 70) = 0;
    *(this + 71) = 0;
    *((uint8_t *)this + 288) = 0;
    *((uint8_t *)this + 289) = 0;
    *((uint8_t *)this + 290) = 0;
    *((uint8_t *)this + 291) = 0;
    *((uint8_t *)this + 292) = 0;
    *((uint8_t *)this + 293) = 0;
    *((uint8_t *)this + 294) = 0;
    *((uint8_t *)this + 295) = 0;
    *((uint8_t *)this + 296) = 0;
    *((uint8_t *)this + 297) = 0;
    *((uint8_t *)this + 298) = 0;
    *((uint8_t *)this + 299) = 0;
    *((uint8_t *)this + 300) = 0;
    *((uint8_t *)this + 301) = 0;
    *((uint8_t *)this + 302) = 0;
    *((uint8_t *)this + 303) = 0;
    *((uint8_t *)this + 304) = 0;
    *((uint8_t *)this + 305) = 0;
    *((uint8_t *)this + 306) = 0;
    *((uint8_t *)this + 307) = 1;
    *((uint8_t *)this + 308) = 0;
    *((uint8_t *)this + 309) = 0;
    *((uint8_t *)this + 310) = 0;
    *((uint8_t *)this + 311) = 1;
    *((uint8_t *)this + 312) = 0;
    *((uint8_t *)this + 313) = 0;
    *((uint8_t *)this + 314) = 0;
    *((uint8_t *)this + 315) = 0;
    *(this + 79) = 0;
    *((uint8_t *)this + 320) = 0;
    *((uint8_t *)this + 321) = 1;
    *((uint8_t *)this + 322) = 0;
    *((uint8_t *)this + 323) = 1;
    *((uint8_t *)this + 324) = 0;
    *((uint8_t *)this + 325) = 0;
    *((uint8_t *)this + 326) = 0;
    *((uint8_t *)this + 327) = 0;
    *((uint8_t *)this + 328) = 0;
    *((uint8_t *)this + 329) = 0;
    *((uint8_t *)this + 330) = 0;
    *((uint8_t *)this + 331) = 0;
    *((uint8_t *)this + 332) = 0;
    *((uint8_t *)this + 333) = 0;
    *((uint8_t *)this + 334) = 10;
    *((uint8_t *)this + 335) = 0;
    *((uint8_t *)this + 336) = 0;
    *((uint8_t *)this + 337) = 0;
    *((uint8_t *)this + 338) = 0;
    *((uint8_t *)this + 339) = 0;
    *((uint8_t *)this + 340) = 0;
    *((uint8_t *)this + 341) = 0;
    *(this + 86) = 0;
    *((uint8_t *)this + 348) = 0;
    *this = &WeaponTypeClass::`vftable';
    *(this + 1) = &WeaponTypeClass::`vftable';
    *(this + 2) = &WeaponTypeClass::`vftable';
    *(this + 3) = &WeaponTypeClass::`vftable';
    AbstractClass::GenerateUniqueID((int)(this + 1));
    if ( g_WeaponTypePool < dword_887570
    || (byte_887575 || !dword_887570)
    && dword_88757C > 0
    && (*(unsigned __int8 (__thiscall **)(WeaponTypeClass **, int, uint32_t))&WeaponTypeClass_Array->gap0[8])(
    &WeaponTypeClass_Array,
    dword_887570 + dword_88757C,
    0) )
    v3 = g_WeaponTypePool++;
    *((uint32_t *)g_WeaponTypeConfig + v3) = this;
    return this;
}

// 0x007729F0
int  WeaponTypeClass::CalculateSpeed(uint32_t *this)
{
    int result; // eax
    double WeatherConBoltExplosion; // [esp+4h] [ebp-8h]
    result = *(this + 40);
    if ( result && !*(uint32_t *)(result + 732) )
    WeatherConBoltExplosion = (double)RulesClass_Instance[1].WeatherConBoltExplosion;
    if ( *(uint8_t *)(result + 661) )
    WeatherConBoltExplosion = RulesClass::GetFiringDistance();
    result = TechnoClass::ComputeScanRange((void *)*(this + 45), WeatherConBoltExplosion);
    *(this + 42) = result;
    return result;
}

// 0x00772AE0
int  WeaponTypeClass::ProcessPower(int this, int *a2)
{
    int v3; // ecx
    int v4; // edx
    int v5; // eax
    int v6; // ecx
    int v7; // edx
    int v8; // eax
    int v9; // eax
    int v10; // eax
    int v11; // eax
    int v12; // eax
    int v13; // edx
    int v14; // eax
    int v15; // ecx
    int v16; // edx
    int v17; // eax
    int v18; // ecx
    int v19; // edx
    int v20; // eax
    int v21; // ecx
    int v22; // edx
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(*(uint32_t *)(this + 152));
    LOBYTE(v3) = *(uint8_t *)(this + 304);
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = *(uint8_t *)(this + 325);
    v5 = Power::FlagProcess(a2, v4);
    LOBYTE(v5) = *(uint8_t *)(this + 326);
    Power::FlagProcess(a2, v5);
    LOBYTE(v6) = *(uint8_t *)(this + 327);
    Power::FlagProcess(a2, v6);
    LOBYTE(v7) = *(uint8_t *)(this + 329);
    v8 = Power::FlagProcess(a2, v7);
    LOBYTE(v8) = *(uint8_t *)(this + 333);
    Power::FlagProcess(a2, v8);
    Power::TimerProcess(*(uint32_t *)(this + 156));
    v9 = *(uint32_t *)(this + 160);
    if ( v9 )
    v10 = (*(int (__stdcall **)(int))(*(uint32_t *)(v9 + 4) + 16))(v9 + 4);
    Power::TimerProcess(v10);
    Power::TimerProcess(*(uint32_t *)(this + 164));
    Power::TimerProcess(*(uint32_t *)(this + 168));
    v11 = *(uint32_t *)(this + 172);
    if ( v11 )
    v12 = (*(int (__stdcall **)(int))(*(uint32_t *)(v11 + 4) + 16))(v11 + 4);
    Power::TimerProcess(v12);
    Power::TimerProcess(*(uint32_t *)(this + 176));
    Power::TimerProcess(*(uint32_t *)(this + 180));
    Power::TimerProcess(*(uint32_t *)(this + 204));
    Power::TimerProcess(*(uint32_t *)(this + 232));
    Power::TimerProcess(*(uint32_t *)(this + 260));
    LOBYTE(v13) = *(uint8_t *)(this + 297);
    v14 = Power::FlagProcess(a2, v13);
    LOBYTE(v14) = *(uint8_t *)(this + 302);
    Power::FlagProcess(a2, v14);
    LOBYTE(v15) = *(uint8_t *)(this + 334);
    Power::FinalizeDrain(a2, v15);
    LOBYTE(v16) = *(uint8_t *)(this + 332);
    v17 = Power::FlagProcess(a2, v16);
    LOBYTE(v17) = *(uint8_t *)(this + 301);
    Power::FlagProcess(a2, v17);
    LOBYTE(v18) = *(uint8_t *)(this + 328);
    Power::FlagProcess(a2, v18);
    LOBYTE(v19) = *(uint8_t *)(this + 303);
    v20 = Power::FlagProcess(a2, v19);
    LOBYTE(v20) = *(uint8_t *)(this + 298);
    Power::FlagProcess(a2, v20);
    LOBYTE(v21) = *(uint8_t *)(this + 299);
    Power::FlagProcess(a2, v21);
    LOBYTE(v22) = *(uint8_t *)(this + 300);
    return Power::FlagProcess(a2, v22);
}

int __stdcall WeaponTypeClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = -1613620790;
    a2[1] = 298979195;
    a2[2] = 1610642049;
    a2[3] = -1252326136;
    return 0;
}

// 0x00772CD0
int __userpurge WeaponTypeClass::SaveLoad_Prefix@<eax>(int a1@<ebx>, int *a2, int a3, int a4)
{
    int *v4; // edi
    uint32_t *v5; // ebp
    int v6; // esi
    int result; // eax
    int i; // ebx
    int j; // ebx
    int k; // ebx
    int m; // esi
    v4 = a2;
    v5 = a2 + 47;
    (*(void (__thiscall **)(int *))(a2[47] + 12))(a2 + 47);
    (*(void (__thiscall **)(int *))(v4[54] + 12))(v4 + 54);
    v6 = a3;
    result = AbstractClass::SaveLoad_Prefix_0(v4, a3);
    if ( result >= 0 )
    if ( v4 )
    WeaponTypeClass::loadWeaponProperties(v4, (int)&a2);
    if ( v4 != (int *)-244 )
    DynamicVectorClass::AnimTypeConstructor(v4 + 61, 0, 0);
    v4[61] = (int)&TypeList<AnimTypeClass const *>::`vftable';
    (*(void (__stdcall **)(int, int **, int, uint32_t, int))(*(uint32_t *)v6 + 12))(v6, &a2, 4, 0, a1);
    for ( i = 0; i < a3; ++i )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v6 + 12))(v6, &a4, 4, 0);
    DynamicVector::Add_Alt4(v4 + 61, &a4);
    if ( v5 )
    DynamicVectorClass::Construct(v5, 0, 0);
    *v5 = &TypeList<int>::`vftable';
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v6 + 12))(v6, &a3, 4, 0);
    for ( j = 0; j < a3; ++j )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v6 + 12))(v6, &a4, 4, 0);
    DynamicVector::Add_Alt(v5, &a4);
    if ( v4 != (int *)-216 )
    TypeList::Construct(v4 + 54);
    (*(void (__stdcall **)(int, int *, int))(*(uint32_t *)v6 + 12))(v6, &a3, 4);
    for ( k = 0; k < (int)a2; ++k )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v6 + 12))(v6, &a3, 4, 0);
    DynamicVector::Add_Alt(v4 + 54, &a3);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 43);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 40);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 71);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 69);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 68);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 70);
    for ( m = 0; m < v4[65]; ++m )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4[62] + 4 * m));
    return 0;
    return result;
}

// 0x00772EB0
int __userpurge WeaponTypeClass::SaveLoad_Prefix_0@<eax>(int a1@<ebx>, int *a2, int *a3, int a4, int a5)
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
    a4 = a2[65];
    (*(void (__stdcall **)(int *, int *, int, uint32_t, int))(v6 + 16))(a3, &a4, 4, 0, a1);
    for ( i = 0; i < a5; ++i )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[62] + 4 * i, 4, 0);
    v8 = *a3;
    a5 = a2[51];
    (*(void (__stdcall **)(int *, int *, int, uint32_t))(v8 + 16))(a3, &a5, 4, 0);
    for ( j = 0; j < a5; ++j )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[48] + 4 * j, 4, 0);
    v10 = *a3;
    a5 = a2[58];
    (*(void (__stdcall **)(int *, int *, int))(v10 + 16))(a3, &a5, 4);
    for ( k = 0; k < a4; ++k )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[55] + 4 * k, 4, 0);
    return 0;
    return result;
}

int WeaponTypeClass::_vt12()
{
    return 352;
}

int WeaponTypeClass::_vt11()
{
    return 49;
}

void ** WeaponTypeClass::_vt08(void **Block, char a2)
{
    int v3; // eax
    void *v4; // eax
    void *v5; // eax
    void *v6; // eax
    void **v8; // [esp+8h] [ebp-4h] BYREF
    *Block = &WeaponTypeClass::`vftable';
    *(Block + 1) = &WeaponTypeClass::`vftable';
    *(Block + 2) = &WeaponTypeClass::`vftable';
    *(Block + 3) = &WeaponTypeClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    *(Block + 40) = 0;
    *(Block + 43) = 0;
    v8 = Block;
    v3 = (*(int (__thiscall **)(WeaponTypeClass **, void ***))&WeaponTypeClass_Array->gap0[16])(
    &WeaponTypeClass_Array,
    &v8);
    if ( v3 != -1 && v3 < g_WeaponTypePool && v3 < --g_WeaponTypePool )
    do
    ++v3;
    *((uint32_t *)g_WeaponTypeConfig + v3 - 1) = *((uint32_t *)g_WeaponTypeConfig + v3);
    while ( v3 < g_WeaponTypePool );
    v4 = *(Block + 62);
    *(Block + 61) = &VectorClass<AnimTypeClass const *>::`vftable';
    if ( v4 && *((uint8_t *)Block + 257) )
    __3_YAXPAX_Z(v4);
    *(Block + 62) = 0;
    *((uint8_t *)Block + 257) = 0;
    *(Block + 63) = 0;
    v5 = *(Block + 55);
    *(Block + 54) = &VectorClass<int>::`vftable';
    if ( v5 && *((uint8_t *)Block + 229) )
    __3_YAXPAX_Z(v5);
    *(Block + 55) = 0;
    *((uint8_t *)Block + 229) = 0;
    *(Block + 56) = 0;
    v6 = *(Block + 48);
    *(Block + 47) = &VectorClass<int>::`vftable';
    if ( v6 && *((uint8_t *)Block + 201) )
    __3_YAXPAX_Z(v6);
    *(Block + 48) = 0;
    *((uint8_t *)Block + 201) = 0;
    *(Block + 49) = 0;
    AbstractTypeClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

