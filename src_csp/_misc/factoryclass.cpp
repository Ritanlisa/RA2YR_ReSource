#include "factoryclass.hpp"

// 0x004C9B20
char  FactoryClass::UpdateProduction(int this)
{
    int Speed; // eax
    uint32_t *v3; // edi
    int v4; // eax
    int v5; // eax
    int v6; // edi
    int v7; // eax
    int v8; // eax
    wchar_t *v9; // eax
    int v11; // [esp+10h] [ebp-8h]
    LOBYTE(Speed) = *(uint8_t *)(this + 112);
    if ( !(uint8_t)Speed )
    Speed = *(uint32_t *)(this + 88);
    if ( Speed )
    if ( *(uint32_t *)(this + 36) == 54 )
    return Speed;
    else if ( !*(uint32_t *)(this + 104) )
    return Speed;
    if ( *(uint32_t *)(this + 104) == -1 || *(uint32_t *)(this + 36) != 54 )
    v3 = (uint32_t *)(this + 44);
    Speed = Locomotor::GetSpeed((int *)(this + 44));
    if ( Speed || (Speed = *(uint32_t *)(this + 56)) == 0 )
    *(uint8_t *)(this + 40) = 0;
    else
    *(uint32_t *)(this + 36) += *(uint32_t *)(this + 60);
    *(uint8_t *)(this + 40) = 1;
    *v3 = CurrentFrame;
    *(uint32_t *)(this + 48) = v11;
    *(uint32_t *)(this + 52) = Speed;
    v4 = *(uint32_t *)(this + 88);
    *(uint8_t *)(this + 93) = 1;
    if ( v4 )
    v5 = *(uint32_t *)(this + 36);
    if ( v5 == 54 )
    v6 = *(uint32_t *)(this + 96);
    else
    v6 = *(uint32_t *)(this + 96) / (54 - v5);
    else
    v6 = 0;
    if ( v6 >= *(uint32_t *)(this + 96) )
    v6 = *(uint32_t *)(this + 96);
    if ( v6 <= (*(int (__stdcall **)(int))(*(uint32_t *)(*(uint32_t *)(this + 108) + 36) + 24))(*(uint32_t *)(this + 108) + 36) )
    HouseClass::ProcessPowerDrain(*(uint32_t *)(this + 108), v6);
    v8 = *(uint32_t *)(this + 96);
    *(uint8_t *)(this + 92) = 0;
    Speed = v8 - v6;
    *(uint32_t *)(this + 96) = Speed;
    else
    v7 = *(uint32_t *)(this + 36);
    *(uint8_t *)(this + 92) = 1;
    Speed = v7 - 1;
    *(uint32_t *)(this + 36) = Speed;
    if ( *(uint32_t *)(this + 36) == 54 )
    *(uint8_t *)(this + 112) = 1;
    v9 = CurrentFrame;
    *(uint32_t *)(this + 56) = 0;
    *(uint32_t *)(this + 44) = v9;
    *(uint32_t *)(this + 48) = v11;
    *(uint32_t *)(this + 52) = 0;
    LOBYTE(Speed) = HouseClass::ProcessPowerDrain(*(uint32_t *)(this + 108), *(uint32_t *)(this + 96));
    *(uint32_t *)(this + 96) = 0;
    return Speed;
}

char  FactoryClass::HasProgressChanged(uint8_t *this)
{
    char result; // al
    result = *(this + 93);
    *(this + 93) = 0;
    return result;
}

bool  FactoryClass::DemandProduction(int this, int a2, #375 *a3, char a4)
{
    int v5; // ecx
    int v6; // eax
    int v7; // esi
    int v8; // eax
    int v9; // eax
    int v10; // edx
    int v12; // ecx
    int v13; // eax
    int v14; // eax
    int v15; // eax
    int v16; // ecx
    int v17; // [esp+Ch] [ebp-8h]
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 44))(a2) == 7 )
    BuildingClass::AbandonProduction(this);
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 44))(a2) == 7
    || (!*(uint32_t *)(this + 56) || *(uint8_t *)(this + 112))
    && *(int *)(this + 80) <= 0
    && (!*(uint32_t *)(this + 88) || !*(uint8_t *)(this + 112))
    || a4 )
    *(uint8_t *)(this + 93) = 1;
    *(uint8_t *)(this + 112) = 1;
    *(uint32_t *)(this + 44) = CurrentFrame;
    *(uint32_t *)(this + 56) = 0;
    *(uint32_t *)(this + 48) = v17;
    *(uint32_t *)(this + 52) = 0;
    *(uint32_t *)(this + 36) = 0;
    *(uint32_t *)(this + 88) = (*(int (__thiscall **)(int, void*375 *))(*(uint32_t *)a2 + 140))(a2, a3);
    if ( !(unsigned __int8)House::IsCurrentPlayer(a3) )
    v12 = *(uint32_t *)(this + 88);
    if ( v12 )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)v12 + 44))(v12) == 6 )
    *(uint8_t *)(*(uint32_t *)(this + 88) + 1738) = 1;
    v13 = *(uint32_t *)(this + 88);
    if ( v13 )
    v14 = *(uint32_t *)(v13 + 540);
    *(uint32_t *)(this + 108) = v14;
    v15 = (*(int (__thiscall **)(int, int))(*(uint32_t *)a2 + 132))(a2, v14);
    v16 = *(uint32_t *)(this + 88);
    *(uint32_t *)(this + 96) = v15;
    *(uint32_t *)(v16 + 768) = v15;
    return *(uint32_t *)(this + 88) != 0;
    else if ( *(uint32_t *)(this + 80) >= RulesClass_Instance->WoodCrateImg
    || HouseClass::ShouldDisableCameo(*(uint32_t **)(this + 108), a2) )
    if ( (unsigned __int8)House::IsHumanPlayer(a3) )
    PlayVocClass(RulesClass_Instance->Scorches1[3], 0x2000, 1.0, 0);
    return 0;
    else
    v5 = *(uint32_t *)(this + 72);
    v6 = *(uint32_t *)(this + 80);
    v7 = this + 64;
    if ( v6 < v5
    || (*(uint8_t *)(v7 + 13) || !v5)
    && (v8 = *(uint32_t *)(v7 + 20), v8 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)v7 + 8))(v7, v5 + v8, 0) )
    v9 = *(uint32_t *)(v7 + 16);
    v10 = *(uint32_t *)(v7 + 4);
    *(uint32_t *)(v7 + 16) = v9 + 1;
    *(uint32_t *)(v10 + 4 * v9) = a2;
    return 1;
}

// 0x004C9E10
char  FactoryClass::SetObject(int this, int a2)
{
    int v3; // eax
    int v5; // [esp+8h] [ebp-8h]
    BuildingClass::AbandonProduction(this);
    *(uint32_t *)(this + 88) = a2;
    v3 = *(uint32_t *)(a2 + 540);
    *(uint32_t *)(this + 96) = 0;
    *(uint32_t *)(this + 108) = v3;
    *(uint32_t *)(this + 44) = CurrentFrame;
    *(uint32_t *)(this + 56) = 0;
    *(uint32_t *)(this + 48) = v5;
    *(uint32_t *)(this + 52) = 0;
    *(uint32_t *)(this + 36) = 54;
    *(uint8_t *)(this + 93) = 1;
    *(uint8_t *)(this + 112) = 1;
    return 1;
}

int  FactoryClass::GetBuildTimeFrames(uint32_t *this)
{
    uint32_t *v1; // ecx
    int v2; // edx
    int v3; // edx
    int result; // eax
    v1 = (uint32_t *)*(this + 22);
    v2 = 0;
    if ( v1 )
    v2 = HouseClass::CalcProductionSpeed(v1);
    v3 = v2 / 54;
    result = v3;
    if ( v3 < 1 )
    return 1;
    if ( v3 > 255 )
    return 255;
    return result;
}

int __stdcall FactoryClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 887937448;
    a2[1] = 298977968;
    a2[2] = 1610655660;
    a2[3] = -1252326136;
    return 0;
}

int __stdcall FactoryClass::vt_05_(int a1, int *a2)
{
    int *v2; // ebp
    int v3; // edi
    int result; // eax
    int v5; // edx
    int v6; // eax
    int v7; // ecx
    int v8; // ecx
    int v9; // eax
    int v10; // eax
    int v11; // edx
    int v12; // esi
    int v13; // [esp+28h] [ebp-4h]
    v2 = a2;
    v3 = a1;
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result >= 0 )
    if ( v3 )
    AbstractClass::InitVtables((uint32_t *)v3, (int)&a2);
    __4type_info_AAEAAV0_ABV0__Z(&a2);
    TechnoTypeVector::Constructor(0, 0);
    *(uint32_t *)(v3 + 64) = &DynamicVectorClass<TechnoTypeClass const *>::`vftable';
    *(uint32_t *)(v3 + 84) = 10;
    *(uint32_t *)(v3 + 80) = 0;
    *(uint32_t *)v3 = &FactoryClass::`vftable';
    *(uint32_t *)(v3 + 4) = &FactoryClass::`vftable';
    *(uint32_t *)(v3 + 8) = &FactoryClass::`vftable';
    *(uint32_t *)(v3 + 12) = &FactoryClass::`vftable';
    v5 = *v2;
    a1 = 0;
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v5 + 12))(v2, &a1, 4, 0);
    if ( result >= 0 )
    v6 = a1;
    v13 = 0;
    if ( a1 <= 0 )
    LABEL_14:
    v12 = 0;
    if ( v6 > 0 )
    do
    ObjectPtr::RegisterForTracking(
    (int)&SwizzleManagerClass_Instance,
    (int *)(*(uint32_t *)(v3 + 68) + 4 * v12++));
    while ( v12 < a1 );
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v3 + 108));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v3 + 88));
    return 0;
    else
    while ( 1 )
    v7 = *v2;
    a2 = 0;
    result = (*(int (__stdcall **)(int *, int **, int, uint32_t))(v7 + 12))(v2, &a2, 4, 0);
    if ( result < 0 )
    break;
    v8 = *(uint32_t *)(v3 + 72);
    if ( *(uint32_t *)(v3 + 80) < v8
    || (*(uint8_t *)(v3 + 77) || !v8)
    && (v9 = *(uint32_t *)(v3 + 84), v9 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(v3 + 64) + 8))(v3 + 64, v8 + v9, 0) )
    v10 = *(uint32_t *)(v3 + 80);
    v11 = *(uint32_t *)(v3 + 68);
    *(uint32_t *)(v3 + 80) = v10 + 1;
    *(uint32_t *)(v11 + 4 * v10) = a2;
    v6 = a1;
    if ( ++v13 >= a1 )
    goto LABEL_14;
    return result;
}

int __stdcall FactoryClass::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    int v4; // edx
    int i; // ebx
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    v4 = *a2;
    a3 = a1[20];
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v4 + 16))(a2, &a3, 4, 0);
    if ( result >= 0 )
    for ( i = 0; i < a3; ++i )
    if ( (*(int (__stdcall **)(int *, int, int, uint32_t))(*a2 + 16))(a2, a1[17] + 4 * i, 4, 0) < 0 )
    break;
    return 0;
    return result;
}

int  FactoryClass::_vt13(#378 *this, int *a2)
{
    int v3; // eax
    int v4; // ecx
    int v5; // eax
    int v6; // eax
    int v7; // eax
    Debug::Log();
    Debug::Log();
    (*(void (__thiscall **)(uint32_t))(**((uint32_t **)this + 22) + 44))(*((uint32_t *)this + 22));
    Debug::Log();
    (*(void (__thiscall **)(uint32_t))(**((uint32_t **)this + 22) + 64))(*((uint32_t *)this + 22));
    Debug::Log();
    Debug::Log();
    Debug::Log();
    Debug::Log();
    Debug::Log();
    Debug::Log();
    (*(void (__stdcall **)(int))(*(uint32_t *)(*((uint32_t *)this + 27) + 4) + 16))(*((uint32_t *)this + 27) + 4);
    Debug::Log();
    (*(void (__stdcall **)(char *))(*((uint32_t *)this + 1) + 16))((char *)this + 4);
    Debug::Log();
    v3 = AbstractClass::ProcessPower(this);
    LOBYTE(v3) = *((uint8_t *)this + 112);
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = *((uint8_t *)this + 93);
    Power::FlagProcess(a2, v4);
    Power::TimerProcess(*((uint32_t *)this + 24));
    Power::TimerProcess(*((uint32_t *)this + 25));
    v5 = *((uint32_t *)this + 22);
    if ( v5 )
    v6 = (*(int (__stdcall **)(int))(*(uint32_t *)(v5 + 4) + 16))(v5 + 4);
    Power::TimerProcess(v6);
    Power::TimerProcess(*((uint32_t *)this + 26));
    v7 = (*(int (__stdcall **)(int))(*(uint32_t *)(*((uint32_t *)this + 27) + 4) + 16))(*((uint32_t *)this + 27) + 4);
    return Power::TimerProcess(v7);
}

int  FactoryClass::_vt10(uint32_t *this, int a2, int a3)
{
    int result; // eax
    result = a2;
    if ( a2 == *(this + 22) )
    *(this + 22) = 0;
    return result;
}

char  FactoryClass::StartProduction_2(int this)
{
    int v2; // eax
    uint8_t *v3; // edi
    int v4; // eax
    int v5; // ecx
    int v6; // eax
    void *v7; // eax
    int v9; // [esp-Ch] [ebp-14h]
    char v10; // [esp-8h] [ebp-10h]
    v2 = *(uint32_t *)(this + 80);
    if ( v2 )
    v2 = *(uint32_t *)(this + 88);
    if ( !v2 )
    if ( !*(uint32_t *)(this + 56) || (LOBYTE(v2) = *(uint8_t *)(this + 112), (uint8_t)v2) )
    v3 = **(uint8_t ***)(this + 68);
    v4 = *(uint32_t *)(this + 80);
    if ( v4 > 0 )
    v5 = v4 - 1;
    v6 = 0;
    for ( *(uint32_t *)(this + 80) = v5;
    v6 < *(uint32_t *)(this + 80);
    *(uint32_t *)(*(uint32_t *)(this + 68) + 4 * v6 - 4) = *(uint32_t *)(*(uint32_t *)(this + 68) + 4 * v6) )
    ++v6;
    v2 = (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v3 + 64))(v3);
    if ( v2 >= 0 )
    v10 = v3[3278];
    v9 = v2;
    v7 = (void *)(*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v3 + 44))(v3);
    LOBYTE(v2) = Sidebar::StartSidebarProduction(*(uint32_t *)(this + 108), v7, v9, v10, 1);
    return v2;
}

char  FactoryClass::RemoveOneFromQueue(uint32_t *this, char a2)
{
    uint32_t *v2; // esi
    int v3; // eax
    int v4; // ecx
    int v5; // ecx
    v2 = this + 16;
    v3 = (*(int (__thiscall **)(uint32_t *, char *))(*(this + 16) + 16))(this + 16, &a2);
    if ( v3 == -1 )
    return 0;
    v4 = v2[4];
    if ( v3 >= v4 )
    return 0;
    v5 = v4 - 1;
    for ( v2[4] = v5; v3 < v2[4]; *(uint32_t *)(v2[1] + 4 * v3 - 4) = *(uint32_t *)(v2[1] + 4 * v3) )
    ++v3;
    return 1;
}

// 0x004CA670
int  FactoryClass::CountType(int *this, int a2)
{
    int v3; // edi
    int v4; // ecx
    int v5; // eax
    uint32_t *v6; // esi
    v3 = 0;
    v4 = *(this + 22);
    if ( v4 )
    v3 = (*(int (__thiscall **)(int))(*(uint32_t *)v4 + 132))(v4) == a2;
    v5 = *(this + 20);
    if ( v5 > 0 )
    v6 = (uint32_t *)*(this + 17);
    do
    if ( *v6 == a2 )
    ++v3;
    ++v6;
    --v5;
    while ( v5 );
    return v3;
}

// 0x004CA6B0
char  FactoryClass::IsQueued(int *this, int a2)
{
    int v2; // edx
    int v3; // eax
    uint32_t *i; // ecx
    v2 = *(this + 20);
    v3 = 0;
    if ( v2 <= 0 )
    return 0;
    for ( i = (uint32_t *)*(this + 17); a2 != *i; ++i )
    if ( ++v3 >= v2 )
    return 0;
    return 1;
}

int FactoryClass::_vt11()
{
    return 12;
}

int FactoryClass::_vt12()
{
    return 116;
}

void ** FactoryClass::_vt08(void **Block, char a2)
{
    int v3; // eax
    int v4; // eax
    void *v5; // eax
    void **v7; // [esp+4h] [ebp-4h] BYREF
    *Block = &FactoryClass::`vftable';
    *(Block + 1) = &FactoryClass::`vftable';
    *(Block + 2) = &FactoryClass::`vftable';
    *(Block + 3) = &FactoryClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    v7 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(dword_A83E30 + 16))(&dword_A83E30, &v7);
    if ( v3 != -1 && v3 < g_TeamTypeCapacity && v3 < --g_TeamTypeCapacity )
    do
    ++v3;
    *((uint32_t *)g_TeamTypeCount + v3 - 1) = *((uint32_t *)g_TeamTypeCount + v3);
    while ( v3 < g_TeamTypeCapacity );
    if ( WTFMode )
    BuildingClass::AbandonProduction((int)Block);
    v7 = Block;
    v4 = (*(int (__thiscall **)(int *, void ***))(AbstractClass_Array + 16))(&AbstractClass_Array, &v7);
    if ( v4 != -1 && v4 < g_AlphaShapePool && v4 < --g_AlphaShapePool )
    do
    ++v4;
    *((uint32_t *)dword_B0F724 + v4 - 1) = *((uint32_t *)dword_B0F724 + v4);
    while ( v4 < g_AlphaShapePool );
    v5 = *(Block + 17);
    *(Block + 16) = &VectorClass<TechnoTypeClass const *>::`vftable';
    if ( v5 && *((uint8_t *)Block + 77) )
    __3_YAXPAX_Z(v5);
    *(Block + 17) = 0;
    *((uint8_t *)Block + 77) = 0;
    *(Block + 18) = 0;
    AbstractClass::DTOR(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

// 0x004F9700
void  FactoryClass::AccumulateCreditsProgress(float *this, int a2, int a3)
{
    int v3; // esi
    float *v4; // edi
    float v5; // [esp+10h] [ebp+4h]
    v3 = a2;
    if ( a2 > 0 )
    v4 = this + 197;
    do
    v5 = (float)RulesClass_Instance[1].RadarEventVisibilityDurations[1];
    if ( Float4::Sum(v4) >= v5 )
    break;
    Float::Accumulate(v4, 1.0, a3);
    --v3;
    while ( v3 > 0 );
}

int  FactoryClass::CompleteCurrentItem(int this, int a2)
{
    int v3; // ebx
    int Value; // eax
    int v5; // eax
    uint8_t *v6; // esi
    int v7; // eax
    int v8; // ecx
    int v9; // eax
    int v10; // eax
    int v11; // ecx
    int v12; // eax
    int v13; // edx
    int v14; // eax
    void *v15; // eax
    int v16; // eax
    int v17; // eax
    int v18; // eax
    int v19; // ecx
    unsigned int v20; // esi
    int v21; // eax
    void *Block; // [esp+10h] [ebp-74h] BYREF
    uint8_t v24[108]; // [esp+14h] [ebp-70h] BYREF
    __int16 v25; // [esp+80h] [ebp-4h]
    char v26; // [esp+82h] [ebp-2h]
    v3 = **(uint32_t **)(this + 8);
    Value = Array::FindValue((int *)v3, *(uint32_t *)this);
    if ( Value == -1 )
    v5 = 0;
    else
    v5 = *(uint32_t *)(*(uint32_t *)(v3 + 4) + 4 * Value);
    v6 = *(uint8_t **)(v5 + 4);
    qmemcpy(v24, v6, sizeof(v24));
    v6 += 108;
    v25 = *(_WORD *)v6;
    v26 = v6[2];
    qmemcpy((void *)(this + 29), v24, 0x6Cu);
    *(_WORD *)(this + 137) = v25;
    *(uint8_t *)(this + 139) = v26;
    v7 = *(uint32_t *)(this + 20);
    if ( v7 > 0 )
    v8 = v7 - 1;
    v9 = 0;
    for ( *(uint32_t *)(this + 20) = v8;
    v9 < *(uint32_t *)(this + 20);
    *(uint32_t *)(*(uint32_t *)(this + 8) + 4 * v9 - 4) = *(uint32_t *)(*(uint32_t *)(this + 8) + 4 * v9) )
    ++v9;
    if ( *(uint32_t *)(this + 148) )
    v14 = Array::FindValue((int *)v3, *(uint32_t *)this);
    if ( v14 == -1 )
    v15 = 0;
    else
    v15 = *(void **)(*(uint32_t *)(v3 + 4) + 4 * v14);
    Block = v15;
    if ( v15 )
    FactoryClass::FinishProduction(v3, (int)v15);
    __3_YAXPAX_Z(*((void **)Block + 1));
    FactoryClass::RemoveItemAt(&Block);
    __3_YAXPAX_Z(Block);
    if ( !*(uint32_t *)(v3 + 16) )
    if ( v3 )
    FactoryClass::RemoveFromArrays((int *)v3, 1);
    v16 = *(uint32_t *)(this + 148);
    if ( v16 > 0 )
    v17 = v16 - 1;
    *(uint32_t *)(this + 148) = v17;
    *(uint32_t *)(this + 148) = v17 <= 0 ? 0 : v17;
    else
    *(uint8_t *)(this + 153) = 1;
    v10 = *(uint32_t *)(this + 12);
    if ( *(uint32_t *)(this + 20) < v10
    || (*(uint8_t *)(this + 17) || !v10)
    && (v11 = *(uint32_t *)(this + 24), v11 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(this + 4) + 8))(this + 4, v10 + v11, 0) )
    v12 = *(uint32_t *)(this + 20);
    v13 = *(uint32_t *)(this + 8);
    *(uint32_t *)(this + 20) = v12 + 1;
    *(uint32_t *)(v13 + 4 * v12) = v3;
    Block = (void *)v3;
    if ( v3 && !*(uint8_t *)(v3 + 28) )
    *(uint8_t *)(v3 + 28) = 1;
    VectorClass::Append(&g_ScriptConfig, &Block);
    v18 = *(uint32_t *)(this + 140) - 1;
    if ( v18 < -1 )
    v18 = -1;
    *(uint32_t *)(this + 140) = v18;
    if ( !*(uint32_t *)(this + 20) )
    Block = *(void **)this;
    v19 = *((uint32_t *)Block + 135);
    v20 = *(uint32_t *)(v19 + 48);
    if ( (unsigned __int8)House::IsHumanPlayer((void*375 *)v19) && HouseClass_Player )
    v20 = *((uint32_t *)HouseClass_Player + 12);
    if ( v20 < 0x18 )
    dword_AC4B84[v20] = (dword_AC4B84[v20] - 1) & ((dword_AC4B84[v20] - 1 < 0) - 1);
    v21 = (*(int (__thiscall **)(int *, void **))(dword_AC4C40 + 16))(&dword_AC4C40, &Block);
    if ( v21 != -1 )
    FactoryClass::RemoveItem(v21);
    qmemcpy((void *)a2, v24, 0x6Cu);
    *(_WORD *)(a2 + 108) = v25;
    *(uint8_t *)(a2 + 110) = v26;
    return a2;
}

// 0x00636DC0
int  FactoryClass::GetState(uint32_t *this)
{
    return *(this + 5);
}

char  FactoryClass::RemoveItemAt(int *this, int a2)
{
    int v3; // eax
    int v4; // ecx
    int v5; // ecx
    v3 = (*(int (__thiscall **)(int *, int))(*this + 16))(this, a2);
    if ( v3 == -1 )
    return 0;
    v4 = *(this + 4);
    if ( v3 >= v4 )
    return 0;
    v5 = v4 - 1;
    for ( *(this + 4) = v5; v3 < *(this + 4); *(uint32_t *)(*(this + 1) + 4 * v3 - 4) = *(uint32_t *)(*(this + 1) + 4 * v3) )
    ++v3;
    return 1;
}

