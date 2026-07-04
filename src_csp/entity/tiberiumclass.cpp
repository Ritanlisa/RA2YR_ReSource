#include "tiberiumclass.hpp"

uint32_t * TiberiumClass::TiberiumClass(uint32_t *this, char *Source)
{
    wchar_t *v3; // edx
    int v4; // eax
    int v5; // eax
    AbstractTypeClass::Constructor((int)this, Source);
    *(this + 40) = -1717986918;
    *(this + 44) = -1717986918;
    *(this + 38) = -1;
    *(this + 39) = 0;
    *(this + 41) = 1069128089;
    *(this + 42) = 0;
    *(this + 45) = 1069128089;
    *(this + 46) = 0;
    *(this + 47) = 0;
    *(this + 48) = 0;
    AnimTypeVector::Constructor(this + 49, 0, 0);
    *(this + 54) = 10;
    *(this + 53) = 0;
    *(this + 49) = &TypeList<AnimTypeClass const *>::`vftable';
    *(this + 56) = 0;
    *(this + 57) = 0;
    *(this + 58) = 0;
    *(this + 59) = 0;
    *(this + 60) = 0;
    *(this + 61) = 0;
    *(this + 62) = 0;
    *(this + 63) = 0;
    *(this + 64) = CurrentFrame;
    *(this + 66) = 0;
    *(this + 67) = 0;
    *(this + 68) = 0;
    *(this + 69) = 0;
    *(this + 70) = 0;
    v3 = CurrentFrame;
    *(this + 73) = 0;
    *(this + 71) = v3;
    *this = &TiberiumClass::`vftable';
    *(this + 1) = &TiberiumClass::`vftable';
    *(this + 2) = &TiberiumClass::`vftable';
    *(this + 3) = &TiberiumClass::`vftable';
    *(this + 38) = g_CrateProcessState;
    if ( g_CrateProcessState < dword_B0F4F0
    || (byte_B0F4F5 || !dword_B0F4F0)
    && dword_B0F4FC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_B0F4E8 + 8))(
    &dword_B0F4E8,
    dword_B0F4F0 + dword_B0F4FC,
    0) )
    v4 = g_CrateProcessState++;
    *(uint32_t *)&BuildingClass_InstanceArray->gap0[4 * v4] = this;
    (*(void (__thiscall **)(uint32_t *))(*(this + 49) + 12))(this + 49);
    if ( g_AnimManager < g_AnimTypePool
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(g_AnimPoolManager + 8))(
    &g_AnimPoolManager,
    g_AnimTypePool + g_AnimManagerConfig,
    0) )
    v5 = g_AnimManager++;
    *((uint32_t *)g_AnimPoolCount + v5) = this;
    return this;
}

char __userpurge TiberiumClass::LoadFromINI@<al>(int a1@<ecx>, double a2@<st0>, unsigned __int8 ***a3)
{
    int Int_Overwrite; // eax
    int v5; // eax
    int v6; // eax
    int v7; // eax
    int v8; // eax
    int v9; // ecx
    int v10; // eax
    char *i; // eax
    int v12; // ecx
    int v13; // edx
    void *v14; // eax
    char result; // al
    double v16; // [esp-Ch] [ebp-D0h]
    double v17; // [esp-Ch] [ebp-D0h]
    int v18; // [esp-8h] [ebp-CCh]
    int v19; // [esp+8h] [ebp-BCh] BYREF
    uint32_t v20[3]; // [esp+Ch] [ebp-B8h] BYREF
    char v21; // [esp+19h] [ebp-ABh]
    int v22; // [esp+1Ch] [ebp-A8h]
    int v23; // [esp+20h] [ebp-A4h]
    int v24; // [esp+24h] [ebp-A0h]
    uint32_t v25[7]; // [esp+28h] [ebp-9Ch] BYREF
    char String[128]; // [esp+44h] [ebp-80h] BYREF
    INIClass::ResetSection(a3);
    if ( !AbstractTypeClass::LoadFromINI(a1, a3) )
    return 0;
    Int_Overwrite = INIClass::ReadInt_Overwrite(a1 + 36, aSpread, *(uint32_t *)(a1 + 156));
    v16 = *(double *)(a1 + 160);
    *(uint32_t *)(a1 + 156) = Int_Overwrite;
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aSpreadpercenta, v16);
    v5 = *(uint32_t *)(a1 + 168);
    *(double *)(a1 + 160) = a2;
    v6 = INIClass::ReadInt_Overwrite(a1 + 36, aGrowth, v5);
    v17 = *(double *)(a1 + 176);
    *(uint32_t *)(a1 + 168) = v6;
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aGrowthpercenta, v17);
    v7 = *(uint32_t *)(a1 + 184);
    *(double *)(a1 + 176) = a2;
    v8 = INIClass::ReadInt_Overwrite(a1 + 36, aValue, v7);
    v9 = *(uint32_t *)(a1 + 188);
    *(uint32_t *)(a1 + 184) = v8;
    v10 = INIClass::ReadInt_Overwrite(a1 + 36, aPower_0, v9);
    v18 = *(uint32_t *)(a1 + 192);
    *(uint32_t *)(a1 + 188) = v10;
    *(uint32_t *)(a1 + 192) = BuildingTypeClass::FindAnimByName(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)g_INI_Key_Color,
    v18);
    if ( INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)aDebris,
    &g_INI_DefaultBuffer,
    String,
    128) )
    DynamicVectorClass::AnimTypeConstructor(v25, 0, 0);
    v25[0] = &TypeList<AnimTypeClass const *>::`vftable';
    for ( i = strtok(String, Delimiter); i; i = strtok(0, Delimiter) )
    if ( !*i )
    break;
    v19 = AnimTypeClass::FindOrCreate(i);
    if ( v19 )
    DynamicVector::Add_Alt4(v25, &v19);
    TypeList::AnimTypeCopy(v20, v25);
    v25[0] = &VectorClass<AnimTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy_Alt((int)v25);
    else
    TypeList::AnimTypeCopy(v20, (uint32_t *)(a1 + 196));
    VectorClass::CopyDefault((uint32_t *)(a1 + 196), v20);
    v12 = v23;
    v13 = v24;
    *(uint32_t *)(a1 + 212) = v22;
    v14 = (void *)v20[1];
    *(uint32_t *)(a1 + 216) = v12;
    *(uint32_t *)(a1 + 220) = v13;
    v20[0] = &VectorClass<AnimTypeClass const *>::`vftable';
    if ( v14 && v21 )
    __3_YAXPAX_Z(v14);
    switch ( INIClass::ReadInt_Overwrite(a1 + 36, g_INI_Key_Image, -1) )
    case 0xFFFFFFFF:
    goto LABEL_19;
    case 2:
    *(uint32_t *)(a1 + 224) = *(uint32_t *)&BuildingTypeClass_Array->gap0[108];
    *(uint32_t *)(a1 + 228) = 12;
    *(uint32_t *)(a1 + 232) = 12;
    return 1;
    case 3:
    *(uint32_t *)(a1 + 224) = *(uint32_t *)BuildingTypeClass_Array->?;
    goto LABEL_18;
    case 4:
    *(uint32_t *)(a1 + 224) = BuildingTypeClass_Array->?;
    goto LABEL_18;
    default:
    *(uint32_t *)(a1 + 224) = *(uint32_t *)&BuildingTypeClass_Array->gap0[408];
    LABEL_18:
    *(uint32_t *)(a1 + 236) = 8;
    *(uint32_t *)(a1 + 228) = 12;
    *(uint32_t *)(a1 + 232) = 12;
    LABEL_19:
    result = 1;
    break;
    return result;
}

int  TiberiumClass::_vt13(int this, int *a2)
{
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(*(uint32_t *)(this + 156));
    Power::TimerProcess(*(uint32_t *)(this + 168));
    Power::TimerProcess(*(uint32_t *)(this + 184));
    Power::TimerProcess(*(uint32_t *)(this + 188));
    Power::TimerProcess(*(uint32_t *)(this + 192));
    Power::TimerProcess(*(uint32_t *)(this + 228));
    return Power::TimerProcess(*(uint32_t *)(this + 232));
}

int __stdcall TiberiumClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = -985803917;
    a2[1] = 298980638;
    a2[2] = 1610642817;
    a2[3] = -1252326136;
    return 0;
}

// 0x00721E80
int __stdcall TiberiumClass::SaveLoad_Prefix(int a1, int a2)
{
    int v2; // esi
    int v3; // ebp
    uint32_t *v4; // eax
    int i; // ecx
    void **v6; // ecx
    uint32_t *v7; // eax
    int j; // ecx
    void **v9; // ecx
    int v10; // eax
    int v11; // ebx
    int result; // eax
    int v13; // edi
    v2 = a1;
    v3 = 0;
    v4 = *(uint32_t **)(a1 + 244);
    if ( v4 )
    for ( i = 0; i <= *v4; *(uint32_t *)(v4[2] + 4 * i - 4) = 0 )
    ++i;
    *v4 = 0;
    v6 = *(void ***)(v2 + 244);
    if ( v6 )
    Scalar::Dtor(v6, 1);
    *(uint32_t *)(v2 + 244) = 0;
    if ( *(uint32_t *)(v2 + 252) )
    __3_YAXPAX_Z(*(void **)(v2 + 252));
    *(uint32_t *)(v2 + 252) = 0;
    if ( *(uint32_t *)(v2 + 248) )
    __3_YAXPAX_Z(*(void **)(v2 + 248));
    *(uint32_t *)(v2 + 248) = 0;
    v7 = *(uint32_t **)(v2 + 272);
    *(uint32_t *)(v2 + 240) = 0;
    if ( v7 )
    for ( j = 0; j <= *v7; *(uint32_t *)(v7[2] + 4 * j - 4) = 0 )
    ++j;
    *v7 = 0;
    v9 = *(void ***)(v2 + 272);
    if ( v9 )
    Scalar::Dtor(v9, 1);
    *(uint32_t *)(v2 + 272) = 0;
    if ( *(uint32_t *)(v2 + 280) )
    __3_YAXPAX_Z(*(void **)(v2 + 280));
    *(uint32_t *)(v2 + 280) = 0;
    if ( *(uint32_t *)(v2 + 276) )
    __3_YAXPAX_Z(*(void **)(v2 + 276));
    *(uint32_t *)(v2 + 276) = 0;
    v10 = *(uint32_t *)(v2 + 196);
    *(uint32_t *)(v2 + 268) = 0;
    (*(void (__thiscall **)(int))(v10 + 12))(v2 + 196);
    v11 = a2;
    result = AbstractClass::SaveLoad_Prefix_0((uint32_t *)v2, a2);
    if ( result >= 0 )
    if ( v2 )
    AbstractTypeClass::Init(v2, (int)&a1);
    DynamicVectorClass::AnimTypeConstructor((uint32_t *)(v2 + 196), 0, 0);
    *(uint32_t *)(v2 + 196) = &TypeList<AnimTypeClass const *>::`vftable';
    Timer::Start((uint32_t *)(v2 + 256), 0);
    Timer::Start((uint32_t *)(v2 + 284), 0);
    *(uint32_t *)v2 = &TiberiumClass::`vftable';
    *(uint32_t *)(v2 + 4) = &TiberiumClass::`vftable';
    *(uint32_t *)(v2 + 8) = &TiberiumClass::`vftable';
    *(uint32_t *)(v2 + 12) = &TiberiumClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 224));
    if ( v2 != -196 )
    AnimTypeList::Constructor((uint32_t *)(v2 + 196));
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v11 + 12))(v11, &a1, 4, 0);
    result = 0;
    if ( a1 > 0 )
    do
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v11 + 12))(v11, &a2, 4, 0);
    DynamicVector::Add_Alt4((uint32_t *)(v2 + 196), &a2);
    ++v3;
    while ( v3 < a1 );
    result = 0;
    v13 = 0;
    if ( *(int *)(v2 + 212) > 0 )
    do
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(uint32_t *)(v2 + 200) + 4 * v13++));
    while ( v13 < *(uint32_t *)(v2 + 212) );
    result = 0;
    *(uint32_t *)(v2 + 272) = 0;
    *(uint32_t *)(v2 + 276) = 0;
    *(uint32_t *)(v2 + 280) = 0;
    *(uint32_t *)(v2 + 244) = 0;
    *(uint32_t *)(v2 + 248) = 0;
    *(uint32_t *)(v2 + 252) = 0;
    return result;
}

int  TiberiumClass::_vt07(#374 *this, int a2, uint32_t *a3)
{
    int result; // eax
    result = ObjectClass::GetSizeMax(this);
    if ( result >= 0 )
    *a3 += 4 * *(uint32_t *)(a2 + 212) + 4;
    return 0;
    return result;
}

// 0x007220D0
int __stdcall TiberiumClass::SaveLoad_Prefix_0(int *a1, int *a2, int a3)
{
    int result; // eax
    int v4; // edx
    int i; // esi
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    v4 = *a2;
    a3 = a1[53];
    (*(void (__stdcall **)(int *, int *, int, uint32_t))(v4 + 16))(a2, &a3, 4, 0);
    for ( i = 0; i < a3; ++i )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a2 + 16))(a2, a1[50] + 4 * i, 4, 0);
    return 0;
    return result;
}

int  TiberiumClass::_vt10(int *this, int a2, int a3)
{
    int i; // edx
    int v4; // eax
    int v5; // esi
    int v6; // eax
    int result; // eax
    for ( i = *(this + 53) - 1; i >= 0; --i )
    if ( *(uint32_t *)(*(this + 50) + 4 * i) == a2 )
    v4 = *(this + 53);
    if ( i < v4 )
    v5 = v4 - 1;
    v6 = i;
    for ( *(this + 53) = v5;
    v6 < *(this + 53);
    *(uint32_t *)(*(this + 50) + 4 * v6 - 4) = *(uint32_t *)(*(this + 50) + 4 * v6) )
    ++v6;
    result = *(this + 56);
    if ( result == a2 )
    *(this + 56) = 0;
    return result;
}

int TiberiumClass::_vt12()
{
    return 296;
}

int TiberiumClass::_vt11()
{
    return 46;
}

int  TiberiumClass::_vt16(uint32_t *this)
{
    return *(this + 38);
}

void * TiberiumClass::_vt08(void *Block, char a2)
{
    TiberiumClass::CleanupMembers((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

