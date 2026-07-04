#include "technotypeclass.hpp"

// 0x0041CB50
char TechnoTypeClass::vt_entry_A0()
{
    return 0;
}

double  TechnoTypeClass::GetThreatMultiplier(float *this, uint32_t *a2)
{
    double result; // st7
    switch ( (*(int (__thiscall **)(uint32_t *))(*a2 + 44))(a2) )
    case 3:
    result = *(this + 5350);
    break;
    case 7:
    if ( a2[898] == 5 )
    result = *(this + 5352);
    else
    result = *(this + 5351);
    break;
    case 16:
    result = *(this + 5348);
    break;
    case 40:
    result = *(this + 5349);
    break;
    default:
    result = 1.0;
    break;
    return result;
}

int  TechnoTypeClass::DTOR(int this)
{
    char v2; // al
    int v3; // eax
    int v4; // eax
    void *v5; // eax
    void *v6; // eax
    void *v7; // eax
    void *v8; // eax
    void *v9; // eax
    void *v10; // eax
    void *v11; // eax
    void *v12; // eax
    void *v13; // eax
    void *v14; // eax
    void *v15; // eax
    int v17; // [esp+8h] [ebp-4h] BYREF
    v2 = *(uint8_t *)(this + 1780);
    *(uint32_t *)this = &TechnoTypeClass::`vftable';
    *(uint32_t *)(this + 4) = &TechnoTypeClass::`vftable';
    *(uint32_t *)(this + 8) = &TechnoTypeClass::`vftable';
    *(uint32_t *)(this + 12) = &TechnoTypeClass::`vftable';
    if ( v2 && *(uint32_t *)(this + 1776) )
    __3_YAXPAX_Z(*(void **)(this + 1776));
    *(uint32_t *)(this + 1776) = 0;
    *(uint8_t *)(this + 1780) = 0;
    if ( *(uint8_t *)(this + 1812) && *(uint32_t *)(this + 1808) )
    __3_YAXPAX_Z(*(void **)(this + 1808));
    *(uint32_t *)(this + 1808) = 0;
    *(uint8_t *)(this + 1812) = 0;
    v17 = this;
    v3 = (*(int (__thiscall **)(int *, int *))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v17);
    if ( v3 != -1 )
    DynamicVector::Remove(&g_AnimPoolManager, v3);
    v17 = this;
    v4 = (*(int (__thiscall **)(int *, int *))(dword_A8EB00 + 16))(&dword_A8EB00, &v17);
    if ( v4 != -1 )
    TechnoTypeClass::RemoveItem(&dword_A8EB00, v4);
    *(uint32_t *)(this + 1940) = &VectorClass<ParticleSystemTypeClass const *>::`vftable';
    VectorClass::Cleanup(this + 1940);
    *(uint32_t *)(this + 1912) = &VectorClass<ParticleSystemTypeClass const *>::`vftable';
    VectorClass::Cleanup(this + 1912);
    *(uint32_t *)(this + 1864) = &VectorClass<AnimTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy_Alt(this + 1864);
    *(uint32_t *)(this + 1836) = &VectorClass<AnimTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy_Alt(this + 1836);
    *(uint32_t *)(this + 1620) = &VectorClass<int>::`vftable';
    VectorClass::Destroy(this + 1620);
    *(uint32_t *)(this + 1592) = &VectorClass<int>::`vftable';
    VectorClass::Destroy(this + 1592);
    *(uint32_t *)(this + 1476) = &VectorClass<AnimTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy_Alt(this + 1476);
    *(uint32_t *)(this + 1296) = &VectorClass<int>::`vftable';
    VectorClass::Destroy(this + 1296);
    *(uint32_t *)(this + 1268) = &VectorClass<int>::`vftable';
    VectorClass::Destroy(this + 1268);
    v5 = *(void **)(this + 1244);
    *(uint32_t *)(this + 1240) = &VectorClass<int>::`vftable';
    if ( v5 && *(uint8_t *)(this + 1253) )
    __3_YAXPAX_Z(v5);
    *(uint32_t *)(this + 1244) = 0;
    *(uint8_t *)(this + 1253) = 0;
    *(uint32_t *)(this + 1248) = 0;
    v6 = *(void **)(this + 1216);
    *(uint32_t *)(this + 1212) = &VectorClass<int>::`vftable';
    if ( v6 && *(uint8_t *)(this + 1225) )
    __3_YAXPAX_Z(v6);
    *(uint32_t *)(this + 1216) = 0;
    *(uint8_t *)(this + 1225) = 0;
    *(uint32_t *)(this + 1220) = 0;
    v7 = *(void **)(this + 1188);
    *(uint32_t *)(this + 1184) = &VectorClass<int>::`vftable';
    if ( v7 && *(uint8_t *)(this + 1197) )
    __3_YAXPAX_Z(v7);
    *(uint32_t *)(this + 1188) = 0;
    *(uint8_t *)(this + 1197) = 0;
    *(uint32_t *)(this + 1192) = 0;
    v8 = *(void **)(this + 1160);
    *(uint32_t *)(this + 1156) = &VectorClass<int>::`vftable';
    if ( v8 && *(uint8_t *)(this + 1169) )
    __3_YAXPAX_Z(v8);
    *(uint32_t *)(this + 1160) = 0;
    *(uint8_t *)(this + 1169) = 0;
    *(uint32_t *)(this + 1164) = 0;
    v9 = *(void **)(this + 1132);
    *(uint32_t *)(this + 1128) = &VectorClass<int>::`vftable';
    if ( v9 && *(uint8_t *)(this + 1141) )
    __3_YAXPAX_Z(v9);
    *(uint32_t *)(this + 1132) = 0;
    *(uint8_t *)(this + 1141) = 0;
    *(uint32_t *)(this + 1136) = 0;
    v10 = *(void **)(this + 1104);
    *(uint32_t *)(this + 1100) = &VectorClass<int>::`vftable';
    if ( v10 && *(uint8_t *)(this + 1113) )
    __3_YAXPAX_Z(v10);
    *(uint32_t *)(this + 1104) = 0;
    *(uint8_t *)(this + 1113) = 0;
    *(uint32_t *)(this + 1108) = 0;
    v11 = *(void **)(this + 1076);
    *(uint32_t *)(this + 1072) = &VectorClass<int>::`vftable';
    if ( v11 && *(uint8_t *)(this + 1085) )
    __3_YAXPAX_Z(v11);
    *(uint32_t *)(this + 1076) = 0;
    *(uint8_t *)(this + 1085) = 0;
    *(uint32_t *)(this + 1080) = 0;
    v12 = *(void **)(this + 1048);
    *(uint32_t *)(this + 1044) = &VectorClass<int>::`vftable';
    if ( v12 && *(uint8_t *)(this + 1057) )
    __3_YAXPAX_Z(v12);
    *(uint32_t *)(this + 1048) = 0;
    *(uint8_t *)(this + 1057) = 0;
    *(uint32_t *)(this + 1052) = 0;
    v13 = *(void **)(this + 1004);
    *(uint32_t *)(this + 1000) = &VectorClass<BuildingTypeClass const *>::`vftable';
    if ( v13 && *(uint8_t *)(this + 1013) )
    __3_YAXPAX_Z(v13);
    *(uint32_t *)(this + 1004) = 0;
    *(uint8_t *)(this + 1013) = 0;
    *(uint32_t *)(this + 1008) = 0;
    v14 = *(void **)(this + 820);
    *(uint32_t *)(this + 816) = &VectorClass<int>::`vftable';
    if ( v14 && *(uint8_t *)(this + 829) )
    __3_YAXPAX_Z(v14);
    *(uint32_t *)(this + 820) = 0;
    *(uint8_t *)(this + 829) = 0;
    *(uint32_t *)(this + 824) = 0;
    v15 = *(void **)(this + 792);
    *(uint32_t *)(this + 788) = &VectorClass<VoxelAnimTypeClass const *>::`vftable';
    if ( v15 && *(uint8_t *)(this + 801) )
    __3_YAXPAX_Z(v15);
    *(uint32_t *)(this + 792) = 0;
    *(uint8_t *)(this + 801) = 0;
    *(uint32_t *)(this + 796) = 0;
    return ObjectTypeClass::Destruct(this);
}

// 0x00711E90
bool  TechnoTypeClass::CanAttackMove_IgnoreWeapon(int this)
{
    return *(uint32_t *)(this + 2200) && !*(uint8_t *)(this + 1736);
}

// 0x007162F0
int __stdcall TechnoTypeClass::SaveLoad_Prefix(int a1, int a2)
{
    uint32_t *v3; // ebp
    int result; // eax
    int j; // ebp
    int k; // ebx
    int m; // ebx
    int n; // ebx
    int ii; // ebx
    int jj; // ebx
    int kk; // ebx
    int mm; // ebx
    int nn; // ebx
    int i1; // ebx
    int i2; // ebx
    int i3; // ebx
    int i4; // ebx
    int i5; // ebx
    int i6; // ebx
    int i7; // ebx
    int i8; // ebx
    int i9; // ebx
    int i10; // ebx
    int i11; // esi
    int i12; // esi
    int i13; // esi
    int i14; // esi
    int i15; // esi
    int *v29; // esi
    int v30; // ebx
    int *v31; // esi
    int v32; // ebx
    int i16; // esi
    int i17; // esi
    int v35; // eax
    int v36; // [esp+280h] [ebp-210h] BYREF
    int v37; // [esp+284h] [ebp-20Ch] BYREF
    int i; // [esp+288h] [ebp-208h]
    char Filename[256]; // [esp+28Ch] [ebp-204h] BYREF
    char Buffer[260]; // [esp+38Ch] [ebp-104h] BYREF
    v3 = (uint32_t *)(a1 + 1000);
    (*(void (__thiscall **)(int))(*(uint32_t *)(a1 + 1000) + 12))(a1 + 1000);
    (*(void (__thiscall **)(int))(*(uint32_t *)(a1 + 788) + 12))(a1 + 788);
    (*(void (__thiscall **)(int))(*(uint32_t *)(a1 + 1476) + 12))(a1 + 1476);
    (*(void (__thiscall **)(int))(*(uint32_t *)(a1 + 1044) + 12))(a1 + 1044);
    (*(void (__thiscall **)(int))(*(uint32_t *)(a1 + 1072) + 12))(a1 + 1072);
    (*(void (__thiscall **)(int))(*(uint32_t *)(a1 + 1100) + 12))(a1 + 1100);
    (*(void (__thiscall **)(int))(*(uint32_t *)(a1 + 1128) + 12))(a1 + 1128);
    (*(void (__thiscall **)(int))(*(uint32_t *)(a1 + 1156) + 12))(a1 + 1156);
    (*(void (__thiscall **)(int))(*(uint32_t *)(a1 + 1184) + 12))(a1 + 1184);
    (*(void (__thiscall **)(int))(*(uint32_t *)(a1 + 1212) + 12))(a1 + 1212);
    (*(void (__thiscall **)(int))(*(uint32_t *)(a1 + 1240) + 12))(a1 + 1240);
    (*(void (__thiscall **)(int))(*(uint32_t *)(a1 + 1268) + 12))(a1 + 1268);
    (*(void (__thiscall **)(int))(*(uint32_t *)(a1 + 1296) + 12))(a1 + 1296);
    (*(void (__thiscall **)(int))(*(uint32_t *)(a1 + 1836) + 12))(a1 + 1836);
    (*(void (__thiscall **)(int))(*(uint32_t *)(a1 + 1864) + 12))(a1 + 1864);
    (*(void (__thiscall **)(int))(*(uint32_t *)(a1 + 1592) + 12))(a1 + 1592);
    (*(void (__thiscall **)(int))(*(uint32_t *)(a1 + 1620) + 12))(a1 + 1620);
    (*(void (__thiscall **)(int))(*(uint32_t *)(a1 + 816) + 12))(a1 + 816);
    result = ObjectTypeClass::LoadCleanup(a1, a2);
    if ( result >= 0 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1028));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1032));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1036));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1892));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1908));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 3416));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 3392));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 3352));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1572));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1576));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1720));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1724));
    if ( a1 != -1000 )
    TypeList::BuildingTypeConstructor(v3);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v36, 4, 0);
    for ( i = 0; i < v36; ++i )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v37, 4, 0);
    DynamicVector::Add_Alt3(v3, &v37);
    if ( a1 != -788 )
    TypeList::VoxelAnimConstructor((uint32_t *)(a1 + 788));
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v36, 4, 0);
    for ( j = 0; j < v36; ++j )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v37, 4, 0);
    DynamicVector::Add2((uint32_t *)(a1 + 788), &v37);
    if ( a1 != -1476 )
    AnimTypeList::Constructor((uint32_t *)(a1 + 1476));
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v36, 4, 0);
    for ( k = 0; k < v36; ++k )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v37, 4, 0);
    DynamicVector::Add_Alt4((uint32_t *)(a1 + 1476), &v37);
    if ( a1 != -1044 )
    TypeList::Construct((uint32_t *)(a1 + 1044));
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v36, 4, 0);
    for ( m = 0; m < v36; ++m )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v37, 4, 0);
    DynamicVector::Add_Alt((uint32_t *)(a1 + 1044), &v37);
    if ( a1 != -1072 )
    TypeList::Construct((uint32_t *)(a1 + 1072));
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v36, 4, 0);
    for ( n = 0; n < v36; ++n )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v37, 4, 0);
    DynamicVector::Add_Alt((uint32_t *)(a1 + 1072), &v37);
    if ( a1 != -1100 )
    TypeList::Construct((uint32_t *)(a1 + 1100));
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v36, 4, 0);
    for ( ii = 0; ii < v36; ++ii )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v37, 4, 0);
    DynamicVector::Add_Alt((uint32_t *)(a1 + 1100), &v37);
    if ( a1 != -1128 )
    TypeList::Construct((uint32_t *)(a1 + 1128));
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v36, 4, 0);
    for ( jj = 0; jj < v36; ++jj )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v37, 4, 0);
    DynamicVector::Add_Alt((uint32_t *)(a1 + 1128), &v37);
    if ( a1 != -1156 )
    TypeList::Construct((uint32_t *)(a1 + 1156));
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v36, 4, 0);
    for ( kk = 0; kk < v36; ++kk )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v37, 4, 0);
    DynamicVector::Add_Alt((uint32_t *)(a1 + 1156), &v37);
    if ( a1 != -1184 )
    TypeList::Construct((uint32_t *)(a1 + 1184));
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v36, 4, 0);
    for ( mm = 0; mm < v36; ++mm )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v37, 4, 0);
    DynamicVector::Add_Alt((uint32_t *)(a1 + 1184), &v37);
    if ( a1 != -1212 )
    TypeList::Construct((uint32_t *)(a1 + 1212));
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v36, 4, 0);
    for ( nn = 0; nn < v36; ++nn )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v37, 4, 0);
    DynamicVector::Add_Alt((uint32_t *)(a1 + 1212), &v37);
    if ( a1 != -1240 )
    TypeList::Construct((uint32_t *)(a1 + 1240));
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v36, 4, 0);
    for ( i1 = 0; i1 < v36; ++i1 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v37, 4, 0);
    DynamicVector::Add_Alt((uint32_t *)(a1 + 1240), &v37);
    if ( a1 != -1268 )
    TypeList::Construct((uint32_t *)(a1 + 1268));
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v36, 4, 0);
    for ( i2 = 0; i2 < v36; ++i2 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v37, 4, 0);
    DynamicVector::Add_Alt((uint32_t *)(a1 + 1268), &v37);
    if ( a1 != -1296 )
    TypeList::Construct((uint32_t *)(a1 + 1296));
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v36, 4, 0);
    for ( i3 = 0; i3 < v36; ++i3 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v37, 4, 0);
    DynamicVector::Add_Alt((uint32_t *)(a1 + 1296), &v37);
    if ( a1 != -1836 )
    AnimTypeList::Constructor((uint32_t *)(a1 + 1836));
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v36, 4, 0);
    for ( i4 = 0; i4 < v36; ++i4 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v37, 4, 0);
    DynamicVector::Add_Alt4((uint32_t *)(a1 + 1836), &v37);
    if ( a1 != -1864 )
    AnimTypeList::Constructor((uint32_t *)(a1 + 1864));
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v36, 4, 0);
    for ( i5 = 0; i5 < v36; ++i5 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v37, 4, 0);
    DynamicVector::Add_Alt4((uint32_t *)(a1 + 1864), &v37);
    if ( a1 != -816 )
    TypeList::Construct((uint32_t *)(a1 + 816));
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v36, 4, 0);
    for ( i6 = 0; i6 < v36; ++i6 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v37, 4, 0);
    DynamicVector::Add_Alt((uint32_t *)(a1 + 816), &v37);
    if ( a1 != -1592 )
    TypeList::Construct((uint32_t *)(a1 + 1592));
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v36, 4, 0);
    for ( i7 = 0; i7 < v36; ++i7 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v37, 4, 0);
    DynamicVector::Add_Alt((uint32_t *)(a1 + 1592), &v37);
    if ( a1 != -1620 )
    TypeList::Construct((uint32_t *)(a1 + 1620));
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v36, 4, 0);
    for ( i8 = 0; i8 < v36; ++i8 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v37, 4, 0);
    DynamicVector::Add_Alt((uint32_t *)(a1 + 1620), &v37);
    if ( a1 != -1912 )
    TechnoTypeClass::Constructor((uint32_t *)(a1 + 1912));
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v36, 4, 0);
    for ( i9 = 0; i9 < v36; ++i9 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v37, 4, 0);
    TypeList::PushBack((uint32_t *)(a1 + 1912), &v37);
    if ( a1 != -1940 )
    TechnoTypeClass::Constructor((uint32_t *)(a1 + 1940));
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v36, 4, 0);
    for ( i10 = 0; i10 < v36; ++i10 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &v37, 4, 0);
    TypeList::PushBack((uint32_t *)(a1 + 1940), &v37);
    for ( i11 = 0; i11 < *(uint32_t *)(a1 + 1016); ++i11 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(uint32_t *)(a1 + 1004) + 4 * i11));
    for ( i12 = 0; i12 < *(uint32_t *)(a1 + 1852); ++i12 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(uint32_t *)(a1 + 1840) + 4 * i12));
    for ( i13 = 0; i13 < *(uint32_t *)(a1 + 1880); ++i13 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(uint32_t *)(a1 + 1868) + 4 * i13));
    for ( i14 = 0; i14 < *(uint32_t *)(a1 + 804); ++i14 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(uint32_t *)(a1 + 792) + 4 * i14));
    for ( i15 = 0; i15 < *(uint32_t *)(a1 + 1492); ++i15 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(uint32_t *)(a1 + 1480) + 4 * i15));
    v29 = (int *)(a1 + 2200);
    v30 = 18;
    do
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v29);
    v29 += 7;
    --v30;
    while ( v30 );
    v31 = (int *)(a1 + 2708);
    v32 = 18;
    do
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v31);
    v31 += 7;
    --v32;
    while ( v32 );
    for ( i16 = 0; i16 < *(uint32_t *)(a1 + 1928); ++i16 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(uint32_t *)(a1 + 1916) + 4 * i16));
    for ( i17 = 0; i17 < *(uint32_t *)(a1 + 1956); ++i17 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(uint32_t *)(a1 + 1944) + 4 * i17));
    _makepath(Buffer, 0, 0, (const char *)(a1 + 504), Ext);
    *(uint32_t *)(a1 + 164) = SearchMIXFile(Buffer, 0);
    INIClass::GetString(
    (unsigned __int8 ***)&CCINIClass_INI_Art,
    (unsigned __int8 *)(a1 + 504),
    (unsigned __int8 *)g_INI_Key_Cameo,
    g_INI_Key_XXICON,
    Filename,
    256);
    if ( !_strcmpi(Filename, g_INI_Key_XXICON) )
    INIClass::GetString(
    (unsigned __int8 ***)&CCINIClass_INI_Art,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)g_INI_Key_Cameo,
    g_INI_Key_XXICON,
    Filename,
    256);
    _makepath(Buffer, 0, 0, Filename, Ext);
    *(uint32_t *)(a1 + 1776) = 0;
    v35 = SearchMIXFile(Buffer, 0);
    *(uint32_t *)(a1 + 1776) = v35;
    if ( !v35 )
    *(uint32_t *)(a1 + 1776) = SearchMIXFile(g_Str_File_XXICON_SHP, 0);
    INIClass::GetString(
    (unsigned __int8 ***)&CCINIClass_INI_Art,
    (unsigned __int8 *)(a1 + 504),
    (unsigned __int8 *)aAltcameo,
    &g_INI_DefaultBuffer,
    Filename,
    256);
    _makepath(Buffer, 0, 0, Filename, Ext);
    *(uint32_t *)(a1 + 1808) = 0;
    *(uint32_t *)(a1 + 1808) = SearchMIXFile(Buffer, 0);
    INIClass::GetString(
    (unsigned __int8 ***)&CCINIClass_INI_Art,
    (unsigned __int8 *)(a1 + 504),
    (unsigned __int8 *)g_INI_Key_Palette,
    &g_INI_DefaultBuffer,
    (char *)(a1 + 3536),
    32);
    if ( *(uint8_t *)(a1 + 3536) )
    *(uint32_t *)(a1 + 3568) = FileExtension::MapHandler((const char *)(a1 + 3536));
    return 0;
    return result;
}

// 0x00716DC0
int __userpurge TechnoTypeClass::SaveLoad_Prefix_0@<eax>(int a1@<ebx>, uint32_t *a2, int *a3, int a4, int a5)
{
    int result; // eax
    int v6; // edx
    int i; // ebx
    int v8; // edx
    int j; // ebx
    int v10; // edx
    int k; // ebx
    int v12; // edx
    int m; // ebx
    int v14; // edx
    int n; // ebx
    int v16; // edx
    int ii; // ebx
    int v18; // edx
    int jj; // ebx
    int v20; // edx
    int kk; // ebx
    int v22; // edx
    int mm; // ebx
    result = AbstractClass::SaveLoad_PrefixWrapper((int)a2, (int)a3, a4);
    if ( result >= 0 )
    v6 = *a3;
    a4 = a2[254];
    (*(void (__stdcall **)(int *, int *, int, uint32_t, int))(v6 + 16))(a3, &a4, 4, 0, a1);
    for ( i = 0; i < a5; ++i )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[251] + 4 * i, 4, 0);
    v8 = *a3;
    a5 = a2[201];
    (*(void (__stdcall **)(int *, int *, int, uint32_t))(v8 + 16))(a3, &a5, 4, 0);
    for ( j = 0; j < a5; ++j )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[198] + 4 * j, 4, 0);
    v10 = *a3;
    a5 = a2[373];
    (*(void (__stdcall **)(int *, int *, int, uint32_t))(v10 + 16))(a3, &a5, 4, 0);
    for ( k = 0; k < a5; ++k )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[370] + 4 * k, 4, 0);
    v12 = *a3;
    a5 = a2[265];
    (*(void (__stdcall **)(int *, int *, int, uint32_t))(v12 + 16))(a3, &a5, 4, 0);
    for ( m = 0; m < a5; ++m )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[262] + 4 * m, 4, 0);
    v14 = *a3;
    a5 = a2[272];
    (*(void (__stdcall **)(int *, int *, int, uint32_t))(v14 + 16))(a3, &a5, 4, 0);
    for ( n = 0; n < a5; ++n )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[269] + 4 * n, 4, 0);
    v16 = *a3;
    a5 = a2[279];
    (*(void (__stdcall **)(int *, int *, int, uint32_t))(v16 + 16))(a3, &a5, 4, 0);
    for ( ii = 0; ii < a5; ++ii )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[276] + 4 * ii, 4, 0);
    v18 = *a3;
    a5 = a2[286];
    (*(void (__stdcall **)(int *, int *, int, uint32_t))(v18 + 16))(a3, &a5, 4, 0);
    for ( jj = 0; jj < a5; ++jj )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[283] + 4 * jj, 4, 0);
    v20 = *a3;
    a5 = a2[293];
    (*(void (__stdcall **)(int *, int *, int, uint32_t))(v20 + 16))(a3, &a5, 4, 0);
    for ( kk = 0; kk < a5; ++kk )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[290] + 4 * kk, 4, 0);
    v22 = *a3;
    a5 = a2[300];
    (*(void (__stdcall **)(int *, int *, int))(v22 + 16))(a3, &a5, 4);
    for ( mm = 0; mm < a4; ++mm )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[297] + 4 * mm, 4, 0);
    DynamicVector::Read(a2 + 303, a3);
    DynamicVector::Read(a2 + 310, a3);
    DynamicVector::Read(a2 + 317, a3);
    DynamicVector::Read(a2 + 324, a3);
    Stream::WriteIntArray(a2 + 459, a3);
    Stream::WriteIntArray(a2 + 466, a3);
    DynamicVector::Read(a2 + 204, a3);
    DynamicVector::Read(a2 + 398, a3);
    DynamicVector::Read(a2 + 405, a3);
    TechnoTypeClass::SaveLoadDataArray(a2 + 478, a3);
    TechnoTypeClass::SaveLoadDataArray(a2 + 485, a3);
    return 0;
    return result;
}

void * TechnoTypeClass::_vt08(void *Block, char a2)
{
    TechnoTypeClass::DTOR((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

// 0x00717B20
int  TechnoTypeClass::SaveLoadDataArray(uint32_t *this, int *a2)
{
    int v3; // ecx
    int result; // eax
    int i; // esi
    int v6; // [esp+20h] [ebp-4h] BYREF
    v3 = *a2;
    v6 = *(this + 4);
    (*(void (__stdcall **)(int *, int *, int, uint32_t))(v3 + 16))(a2, &v6, 4, 0);
    result = v6;
    for ( i = 0; i < v6; ++i )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a2 + 16))(a2, *(this + 1) + 4 * i, 4, 0);
    result = v6;
    return result;
}

// 0x00721290
int  TechnoTypeClass::CheckFlag(uint32_t *this, int a2)
{
    int result; // eax
    result = a2;
    if ( a2 >= 255 )
    result = 255;
    *(this + 3) = result;
    return result;
}

