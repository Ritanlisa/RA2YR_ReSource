#include "infantrytypeclass.hpp"

// 0x005236A0
int  InfantryTypeClass::Constructor(int this, char *Source)
{
    int v3; // eax
    bool v4; // zf
    int v5; // ecx
    uint32_t *v6; // edx
    int i; // eax
    TechnoTypeClass::ReadINI((char *)this, Source, 0);
    *(uint32_t *)(this + 3576) = -1;
    *(uint32_t *)(this + 3580) = 1;
    *(uint32_t *)(this + 3584) = 7;
    *(uint32_t *)(this + 3644) = 0;
    *(uint32_t *)(this + 3648) = 0;
    *(uint32_t *)(this + 3652) = 0;
    *(uint32_t *)(this + 3656) = 0;
    *(uint32_t *)(this + 3660) = 0;
    AnimTypeVector::Constructor((uint32_t *)(this + 3664), 0, 0);
    *(uint32_t *)(this + 3680) = 0;
    *(uint32_t *)(this + 3684) = 10;
    *(uint32_t *)(this + 3664) = &TypeList<AnimTypeClass const *>::`vftable';
    AnimTypeVector::Constructor((uint32_t *)(this + 3692), 0, 0);
    *(uint32_t *)(this + 3712) = 10;
    *(uint32_t *)(this + 3708) = 0;
    *(uint32_t *)(this + 3692) = &TypeList<AnimTypeClass const *>::`vftable';
    VectorClass::Construct((uint32_t *)(this + 3720), 0, 0);
    *(uint32_t *)(this + 3740) = 10;
    *(uint32_t *)(this + 3736) = 0;
    *(uint32_t *)(this + 3720) = &TypeList<int>::`vftable';
    *(uint32_t *)(this + 3748) = -1;
    *(uint32_t *)(this + 3752) = -1;
    *(uint8_t *)(this + 3756) = 0;
    *(uint8_t *)(this + 3757) = 0;
    *(uint8_t *)(this + 3758) = 0;
    *(uint32_t *)(this + 3760) = 0;
    *(uint8_t *)(this + 3764) = 0;
    *(uint8_t *)(this + 3765) = 0;
    *(uint32_t *)(this + 3768) = 1;
    *(uint8_t *)(this + 3772) = 0;
    *(uint8_t *)(this + 3773) = 1;
    *(uint8_t *)(this + 3774) = 0;
    *(uint8_t *)(this + 3775) = 0;
    *(uint8_t *)(this + 3776) = 0;
    *(uint8_t *)(this + 3777) = 0;
    *(uint8_t *)(this + 3778) = 0;
    *(uint8_t *)(this + 3779) = 0;
    *(uint8_t *)(this + 3780) = 0;
    *(uint8_t *)(this + 3781) = 0;
    *(uint8_t *)(this + 3782) = 0;
    *(uint8_t *)(this + 3783) = 0;
    *(uint8_t *)(this + 3784) = 0;
    *(uint8_t *)(this + 3785) = 1;
    *(uint8_t *)(this + 3786) = 0;
    *(uint8_t *)(this + 3787) = 0;
    *(uint32_t *)this = &InfantryTypeClass::`vftable';
    *(uint32_t *)(this + 4) = &InfantryTypeClass::`vftable';
    *(uint32_t *)(this + 8) = &InfantryTypeClass::`vftable';
    *(uint32_t *)(this + 12) = &InfantryTypeClass::`vftable';
    AbstractClass::GenerateUniqueID(this + 4);
    v3 = g_LoadScreenProgress;
    if ( g_LoadScreenProgress < dword_A8E350
    || (byte_A8E355 || !dword_A8E350)
    && dword_A8E35C > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(InfantryTypeClass_Array + 8))(
    &InfantryTypeClass_Array,
    dword_A8E350 + dword_A8E35C,
    0) == 0,
    v3 = g_LoadScreenProgress,
    !v4) )
    g_LoadScreenProgress = v3 + 1;
    *((uint32_t *)Factory_ExitCellTable + v3) = this;
    v3 = g_LoadScreenProgress;
    v5 = 0;
    if ( v3 <= 0 )
    LABEL_11:
    v5 = -1;
    else
    v6 = Factory_ExitCellTable;
    while ( *v6 != this )
    ++v5;
    ++v6;
    if ( v5 >= v3 )
    goto LABEL_11;
    *(uint32_t *)(this + 3576) = v5;
    *(uint32_t *)(this + 3592) = 0;
    *(uint32_t *)(this + 3588) = 0;
    *(uint32_t *)(this + 3596) = 0;
    *(uint32_t *)(this + 3604) = 0;
    *(uint32_t *)(this + 3608) = 0;
    *(uint8_t *)(this + 3612) = 0;
    *(uint32_t *)(this + 3600) = 0;
    *(uint32_t *)(this + 3616) = 0;
    *(uint32_t *)(this + 3632) = 0;
    *(uint32_t *)(this + 3620) = 0;
    *(uint32_t *)(this + 3636) = 0;
    *(uint8_t *)(this + 3640) = 0;
    *(uint32_t *)(this + 1816) = 8;
    *(uint32_t *)(this + 3624) = 0;
    *(uint8_t *)(this + 3227) = 0;
    *(uint8_t *)(this + 557) = 1;
    *(uint8_t *)(this + 3276) = 0;
    *(uint32_t *)(this + 3628) = 0;
    *(uint8_t *)(this + 3277) = 0;
    *(uint8_t *)(this + 3381) = 0;
    *(uint8_t *)(this + 3382) = 0;
    *(uint8_t *)(this + 3387) = 0;
    *(uint8_t *)(this + 3384) = 1;
    *(uint8_t *)(this + 3479) = 1;
    *(uint8_t *)(this + 3478) = 0;
    *(uint8_t *)(this + 3374) = 0;
    *(uint32_t *)(this + 3644) = __2_YAPAXI_Z(0x5E8u);
    for ( i = 0; i < 1512; *(uint32_t *)(i + *(uint32_t *)(this + 3644) - 20) = 0 )
    i += 36;
    *(uint32_t *)(i + *(uint32_t *)(this + 3644) - 36) = 0;
    *(uint32_t *)(i + *(uint32_t *)(this + 3644) - 32) = 0;
    *(uint32_t *)(i + *(uint32_t *)(this + 3644) - 28) = 0;
    *(uint32_t *)(i + *(uint32_t *)(this + 3644) - 24) = -1;
    return this;
}

int  InfantryTypeClass::_vt35(void *this, IUnknown *ppv)
{
    void *v3; // eax
    v3 = __2_YAPAXI_Z(0x6F0u);
    if ( v3 )
    return InfantryClass::Construct((int)v3, (int)this, ppv);
    else
    return 0;
}

char  InfantryTypeClass::_vt32(void *this, __int16 *a2, IUnknown *ppv)
{
    void *v4; // eax
    int v5; // esi
    int v6; // eax
    uint32_t *v7; // eax
    int *v8; // eax
    int v9; // ecx
    int v10; // edx
    uint32_t v12[3]; // [esp+4h] [ebp-24h] BYREF
    uint32_t v13[3]; // [esp+10h] [ebp-18h] BYREF
    int v14[3]; // [esp+1Ch] [ebp-Ch] BYREF
    v4 = __2_YAPAXI_Z(0x6F0u);
    if ( v4 )
    v5 = InfantryClass::Construct((int)v4, (int)this, ppv);
    if ( v5 )
    v6 = a2[1] << 8;
    v12[0] = (*a2 << 8) + 128;
    v12[1] = v6 + 128;
    v12[2] = 0;
    v7 = Coord::To_Cell(&MapClass_Instance, v12);
    v8 = ObjectPlacement::CalcPosition(v7, v14, v12, 0, 0, 0);
    v13[0] = *v8;
    v9 = v8[1];
    v13[1] = v9;
    v10 = v8[2];
    v13[2] = v10;
    if ( v13[0] != dword_A8F280 || v9 != dword_A8F284 || v10 != dword_A8F288 )
    return (*(int (__thiscall **)(int, uint32_t *, int))(*(uint32_t *)v5 + 216))(v5, v13, 64);
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v5 + 32))(v5, 1);
    return 0;
}

int *__stdcall InfantryTypeClass::_vt36(int a1)
{
    if ( (byte_A8F2C8 & 1) == 0 )
    byte_A8F2C8 |= 1u;
    dword_A8F28C = 0;
    dword_A8F290 = 2147450879;
    atexit(nullsub_147);
    return &dword_A8F28C;
}

char __userpurge InfantryTypeClass::LoadFromINI@<al>(int a1@<ecx>, double a2@<st0>, unsigned __int8 ***a3)
{
    int PipIdx; // eax
    int v5; // ebx
    int v6; // eax
    int v7; // ebx
    int v8; // eax
    unsigned __int8 *inited; // eax
    void ***v10; // eax
    char *i; // eax
    int v12; // ecx
    int v13; // edx
    char *j; // eax
    char Bool_Overwrite; // al
    int v16; // ebx
    int Index; // eax
    int v18; // ebx
    int v19; // eax
    char v20; // al
    char v21; // cl
    char v22; // al
    char v23; // al
    char v24; // cl
    char v25; // al
    int Int_Overwrite; // eax
    char v27; // cl
    char v28; // al
    char v29; // al
    char v30; // cl
    char v31; // al
    char v32; // al
    char v33; // cl
    char v34; // al
    char v35; // al
    char v36; // cl
    char v37; // al
    char v38; // al
    int v39; // eax
    int v40; // ecx
    int v41; // eax
    void **v43[2]; // [esp-1Ch] [ebp-E8h] BYREF
    unsigned __int8 *v44; // [esp-14h] [ebp-E0h]
    char *v45; // [esp-10h] [ebp-DCh]
    char *v46; // [esp-Ch] [ebp-D8h]
    char *v47; // [esp-8h] [ebp-D4h]
    int v48; // [esp-4h] [ebp-D0h]
    void ***IntList; // [esp+10h] [ebp-BCh] BYREF
    uint32_t v50[7]; // [esp+14h] [ebp-B8h] BYREF
    uint32_t v51[6]; // [esp+30h] [ebp-9Ch] BYREF
    int v52; // [esp+48h] [ebp-84h]
    char String[128]; // [esp+4Ch] [ebp-80h] BYREF
    INIClass::ResetSection(a3);
    v48 = (int)a3;
    *(uint8_t *)(a1 + 3215) = 0;
    if ( !ObjectTypeClass::LoadExtras(a1, a2, (unsigned __int8 ***)v48) )
    return 0;
    *(uint32_t *)(a1 + 3580) = INIClass::GetPipIdx(a1 + 36, aPip, *(uint32_t *)(a1 + 3580));
    PipIdx = INIClass::GetPipIdx(a1 + 36, aOccupypip, *(uint32_t *)(a1 + 3584));
    v5 = *(uint32_t *)(a1 + 3588);
    v48 = 128;
    v47 = String;
    v46 = &g_INI_DefaultBuffer;
    v45 = aOccupyweapon;
    v44 = (unsigned __int8 *)(a1 + 36);
    *(uint32_t *)(a1 + 3584) = PipIdx;
    if ( INIClass::GetString(a3, v44, (unsigned __int8 *)v45, v46, v47, v48) )
    v6 = InfantryTypeClass::Find(String);
    else
    v6 = v5;
    v7 = *(uint32_t *)(a1 + 3616);
    *(uint32_t *)(a1 + 3588) = v6;
    if ( INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)aEliteoccupywea,
    &g_INI_DefaultBuffer,
    String,
    128) )
    v8 = InfantryTypeClass::Find(String);
    else
    v8 = v7;
    *(uint32_t *)(a1 + 3616) = v8;
    IntList = v43;
    DynamicVectorClass::Copy(v43, (uint32_t *)(a1 + 3720));
    *IntList = &TypeList<int>::`vftable';
    inited = (unsigned __int8 *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(a1 + 36));
    IntList = (void ***)GetINIClassIntList(
    (int)v50,
    a3,
    inited,
    (unsigned __int8 *)aVoicecomment,
    v43[0],
    v43[1],
    (int)v44,
    (__int16)v45,
    (int)v46,
    (int)v47,
    v48);
    TypeList::Copy((uint32_t *)(a1 + 3720), IntList);
    v10 = IntList;
    *(uint32_t *)(a1 + 3736) = IntList[4];
    *(uint32_t *)(a1 + 3740) = v10[5];
    *(uint32_t *)(a1 + 3744) = v10[6];
    v50[0] = &VectorClass<int>::`vftable';
    VectorClass::Destroy((int)v50);
    if ( INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)aDeadbodies,
    &g_INI_DefaultBuffer,
    String,
    128) )
    DynamicVectorClass::AnimTypeConstructor(v50, 0, 0);
    v50[0] = &TypeList<AnimTypeClass const *>::`vftable';
    for ( i = strtok(String, Delimiter); i; i = strtok(0, Delimiter) )
    if ( !*i )
    break;
    IntList = (void ***)AnimTypeClass::FindOrCreate(i);
    if ( IntList )
    DynamicVector::Add_Alt4(v50, &IntList);
    TypeList::AnimTypeCopy(v51, v50);
    v50[0] = &VectorClass<AnimTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy_Alt((int)v50);
    else
    TypeList::AnimTypeCopy(v51, (uint32_t *)(a1 + 3664));
    VectorClass::CopyDefault((uint32_t *)(a1 + 3664), v51);
    v12 = v51[5];
    v13 = v52;
    *(uint32_t *)(a1 + 3680) = v51[4];
    *(uint32_t *)(a1 + 3684) = v12;
    *(uint32_t *)(a1 + 3688) = v13;
    v51[0] = &VectorClass<AnimTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy_Alt((int)v51);
    if ( INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)aDeathanims,
    &g_INI_DefaultBuffer,
    String,
    128) )
    DynamicVectorClass::AnimTypeConstructor(v50, 0, 0);
    v50[0] = &TypeList<AnimTypeClass const *>::`vftable';
    for ( j = strtok(String, Delimiter); j; j = strtok(0, Delimiter) )
    if ( !*j )
    break;
    IntList = (void ***)AnimTypeClass::FindOrCreate(j);
    if ( IntList )
    DynamicVector::Add_Alt4(v50, &IntList);
    TypeList::AnimTypeCopy(v51, v50);
    v50[0] = &VectorClass<AnimTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy_Alt((int)v50);
    else
    TypeList::AnimTypeCopy(v51, (uint32_t *)(a1 + 3692));
    InfantryTypeClass::CopyDataArray(v51);
    *(uint32_t *)(a1 + 3716) = v52;
    v51[0] = &VectorClass<AnimTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy_Alt((int)v51);
    Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, aCyborg, *(uint8_t *)(a1 + 3756));
    LOBYTE(v48) = *(uint8_t *)(a1 + 3757);
    v47 = aNothuman;
    v46 = (char *)(a1 + 36);
    *(uint8_t *)(a1 + 3756) = Bool_Overwrite;
    *(uint8_t *)(a1 + 3757) = INIClass::ReadBool_Overwrite(v46, v47, v48);
    if ( *(uint8_t *)(a1 + 3756) )
    *(uint8_t *)(a1 + 3215) = 1;
    v16 = *(uint32_t *)(a1 + 3748);
    if ( !INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)aEnterwatersoun,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (Index = VocClass::FindIndex(String), Index == -1) )
    Index = v16;
    v18 = *(uint32_t *)(a1 + 3752);
    v48 = 128;
    v47 = String;
    v46 = &g_INI_DefaultBuffer;
    v45 = aLeavewatersoun;
    v44 = (unsigned __int8 *)(a1 + 36);
    *(uint32_t *)(a1 + 3748) = Index;
    if ( !INIClass::GetString(a3, v44, (unsigned __int8 *)v45, v46, v47, v48)
    || (v19 = VocClass::FindIndex(String), v19 == -1) )
    v19 = v18;
    LOBYTE(v48) = *(uint8_t *)(a1 + 3772);
    v47 = aFearless;
    v46 = (char *)(a1 + 36);
    *(uint32_t *)(a1 + 3752) = v19;
    *(uint8_t *)(a1 + 3772) = INIClass::ReadBool_Overwrite(v46, v47, v48);
    v20 = INIClass::ReadBool_Overwrite(a1 + 36, aFraidycat, *(uint8_t *)(a1 + 3775));
    v21 = *(uint8_t *)(a1 + 3774);
    *(uint8_t *)(a1 + 3775) = v20;
    v22 = INIClass::ReadBool_Overwrite(a1 + 36, aInfiltrate, v21);
    LOBYTE(v48) = *(uint8_t *)(a1 + 3758);
    v47 = aIvan;
    v46 = (char *)(a1 + 36);
    *(uint8_t *)(a1 + 3774) = v22;
    *(uint8_t *)(a1 + 3758) = INIClass::ReadBool_Overwrite(v46, v47, v48);
    v23 = INIClass::ReadBool_Overwrite(a1 + 36, aOccupier, *(uint8_t *)(a1 + 3764));
    v24 = *(uint8_t *)(a1 + 3765);
    *(uint8_t *)(a1 + 3764) = v23;
    v25 = INIClass::ReadBool_Overwrite(a1 + 36, aAssaulter, v24);
    v48 = *(uint32_t *)(a1 + 3760);
    v47 = aDetectiondista;
    v46 = (char *)(a1 + 36);
    *(uint8_t *)(a1 + 3765) = v25;
    *(uint32_t *)(a1 + 3760) = INIClass::ReadInt_Overwrite(v46, v47, v48);
    Int_Overwrite = INIClass::ReadInt_Overwrite(a1 + 36, aHarvestrate, *(uint32_t *)(a1 + 3768));
    v27 = *(uint8_t *)(a1 + 3778);
    *(uint32_t *)(a1 + 3768) = Int_Overwrite;
    v28 = INIClass::ReadBool_Overwrite(a1 + 36, aC4, v27);
    LOBYTE(v48) = *(uint8_t *)(a1 + 3777);
    v47 = g_INI_Key_Civilian;
    v46 = (char *)(a1 + 36);
    *(uint8_t *)(a1 + 3778) = v28;
    *(uint8_t *)(a1 + 3777) = INIClass::ReadBool_Overwrite(v46, v47, v48);
    v29 = INIClass::ReadBool_Overwrite(a1 + 36, aEngineer, *(uint8_t *)(a1 + 3779));
    v30 = *(uint8_t *)(a1 + 3776);
    *(uint8_t *)(a1 + 3779) = v29;
    v31 = INIClass::ReadBool_Overwrite(a1 + 36, aTiberiumproof, v30);
    LOBYTE(v48) = *(uint8_t *)(a1 + 3780);
    v47 = aAgent;
    v46 = (char *)(a1 + 36);
    *(uint8_t *)(a1 + 3776) = v31;
    *(uint8_t *)(a1 + 3780) = INIClass::ReadBool_Overwrite(v46, v47, v48);
    v32 = INIClass::ReadBool_Overwrite(a1 + 36, aThief, *(uint8_t *)(a1 + 3781));
    v33 = *(uint8_t *)(a1 + 3782);
    *(uint8_t *)(a1 + 3781) = v32;
    v34 = INIClass::ReadBool_Overwrite(a1 + 36, aVehiclethief, v33);
    LOBYTE(v48) = *(uint8_t *)(a1 + 3783);
    v47 = aDoggie;
    v46 = (char *)(a1 + 36);
    *(uint8_t *)(a1 + 3782) = v34;
    *(uint8_t *)(a1 + 3783) = INIClass::ReadBool_Overwrite(v46, v47, v48);
    v35 = INIClass::ReadBool_Overwrite(a1 + 36, aDeployer, *(uint8_t *)(a1 + 3784));
    v36 = *(uint8_t *)(a1 + 3785);
    *(uint8_t *)(a1 + 3784) = v35;
    v37 = INIClass::ReadBool_Overwrite(a1 + 36, aDeployedcrusha, v36);
    LOBYTE(v48) = *(uint8_t *)(a1 + 3786);
    v47 = aUseownname;
    v46 = (char *)(a1 + 36);
    *(uint8_t *)(a1 + 3785) = v37;
    *(uint8_t *)(a1 + 3786) = INIClass::ReadBool_Overwrite(v46, v47, v48);
    *(uint8_t *)(a1 + 3787) = INIClass::ReadBool_Overwrite(a1 + 36, aJumpjetturn, *(uint8_t *)(a1 + 3787));
    if ( *(uint8_t *)(a1 + 3778) )
    *(uint8_t *)(a1 + 3774) = 1;
    if ( *(uint8_t *)(a1 + 3779) )
    *(uint8_t *)(a1 + 3774) = 1;
    if ( *(uint8_t *)(a1 + 3780) )
    *(uint8_t *)(a1 + 3774) = 1;
    v38 = INIClass::ReadBool_Overwrite(a1 + 504, aCrawls, *(uint8_t *)(a1 + 3773));
    v48 = *(uint32_t *)(a1 + 3648);
    v47 = aFireup;
    v46 = (char *)(a1 + 504);
    *(uint8_t *)(a1 + 3773) = v38;
    *(uint32_t *)(a1 + 3648) = INIClass::ReadInt_Overwrite(v46, v47, v48);
    v39 = INIClass::ReadInt_Overwrite(a1 + 504, aFireprone, *(uint32_t *)(a1 + 3652));
    v40 = *(uint32_t *)(a1 + 3656);
    *(uint32_t *)(a1 + 3652) = v39;
    v41 = INIClass::ReadInt_Overwrite(a1 + 504, aSecondaryfire, v40);
    v48 = *(uint32_t *)(a1 + 3660);
    v47 = g_INI_Key_SecondaryProne;
    v46 = (char *)(a1 + 504);
    *(uint32_t *)(a1 + 3656) = v41;
    *(uint32_t *)(a1 + 3660) = INIClass::ReadInt_Overwrite(v46, v47, v48);
    AnimSequence::Parse(a1);
    return 1;
}

uint32_t *__stdcall InfantryTypeClass::_vt31(uint32_t *a1)
{
    int v1; // esi
    v1 = 2 * dword_A8F2CC;
    *a1 = 85;
    a1[1] = 85;
    a1[2] = v1;
    return a1;
}

int InfantryTypeClass::_vt45()
{
    return RulesClass_Instance[1].DrainMoneyFrameDelay;
}

int InfantryTypeClass::_vt44()
{
    return 0;
}

uint32_t *__stdcall InfantryTypeClass::_vt27(uint32_t *a1, int *a2)
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
    if ( v7 < GroundHeight )
    v3 = Cell::GetGroundHeight(&v5);
    *a1 = v5;
    a1[1] = v6;
    a1[2] = v3;
    return a1;
}

int  InfantryTypeClass::_vt13(int this, int *a2)
{
    int v3; // ecx
    int v4; // edx
    int v5; // eax
    int v6; // ecx
    int v7; // edx
    int v8; // eax
    int v9; // ecx
    int v10; // edx
    int v11; // eax
    int v12; // ecx
    int v13; // edx
    BuildingTypeClass::ProcessPower(this, a2);
    Power::TimerProcess(*(uint32_t *)(this + 3580));
    Checksummer::Add_Buffer((unsigned int *)a2, *(unsigned __int8 **)(this + 3644), 1512);
    Power::TimerProcess(*(uint32_t *)(this + 3648));
    Power::TimerProcess(*(uint32_t *)(this + 3652));
    Power::TimerProcess(*(uint32_t *)(this + 3736));
    Power::TimerProcess(*(uint32_t *)(this + 3680));
    Power::TimerProcess(*(uint32_t *)(this + 3708));
    LOBYTE(v3) = *(uint8_t *)(this + 3772);
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = *(uint8_t *)(this + 3773);
    v5 = Power::FlagProcess(a2, v4);
    LOBYTE(v5) = *(uint8_t *)(this + 3774);
    Power::FlagProcess(a2, v5);
    LOBYTE(v6) = *(uint8_t *)(this + 3775);
    Power::FlagProcess(a2, v6);
    LOBYTE(v7) = *(uint8_t *)(this + 3776);
    v8 = Power::FlagProcess(a2, v7);
    LOBYTE(v8) = *(uint8_t *)(this + 3777);
    Power::FlagProcess(a2, v8);
    LOBYTE(v9) = *(uint8_t *)(this + 3778);
    Power::FlagProcess(a2, v9);
    LOBYTE(v10) = *(uint8_t *)(this + 3779);
    v11 = Power::FlagProcess(a2, v10);
    LOBYTE(v11) = *(uint8_t *)(this + 3780);
    Power::FlagProcess(a2, v11);
    LOBYTE(v12) = *(uint8_t *)(this + 3781);
    Power::FlagProcess(a2, v12);
    LOBYTE(v13) = *(uint8_t *)(this + 3782);
    return Power::FlagProcess(a2, v13);
}

int __userpurge InfantryTypeClass::_vt05@<eax>(int a1@<ebp>, int a2, int a3, int a4)
{
    uint32_t *v4; // edi
    int v5; // ebx
    int v6; // esi
    int result; // eax
    int i; // ebx
    int j; // ebx
    int k; // ebx
    int m; // ebx
    void *v12; // eax
    int v13; // [esp+70h] [ebp-4h]
    v4 = (uint32_t *)a2;
    v5 = 0;
    if ( *(uint32_t *)(a2 + 3644) )
    __3_YAXPAX_Z(*(void **)(a2 + 3644));
    v4[911] = 0;
    v6 = a3;
    result = TechnoTypeClass::SaveLoad_Prefix((int)v4, a3);
    v13 = result;
    if ( result >= 0 )
    if ( v4 )
    InfantryTypeClass::Constructor_523980(v4, (int)&a2);
    VoxelAnimType::LoadAnim((char *)v4);
    ObjectTypeClass::Load2DArt((char *)v4);
    if ( v4 != (uint32_t *)-3720 )
    DynamicVectorClass::Construct(v4 + 930, 0, 0);
    v4[930] = &TypeList<int>::`vftable';
    (*(void (__stdcall **)(int, int *, int, uint32_t, int))(*(uint32_t *)v6 + 12))(v6, &a2, 4, 0, a1);
    if ( a3 > 0 )
    do
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v6 + 12))(v6, &a4, 4, 0);
    DynamicVector::Add_Alt(v4 + 930, &a4);
    ++v5;
    while ( v5 < a3 );
    if ( v4 != (uint32_t *)-3664 )
    DynamicVectorClass::AnimTypeConstructor(v4 + 916, 0, 0);
    v4[916] = &TypeList<AnimTypeClass const *>::`vftable';
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v6 + 12))(v6, &a3, 4, 0);
    for ( i = 0; i < a3; ++i )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v6 + 12))(v6, &a4, 4, 0);
    DynamicVector::Add_Alt4(v4 + 916, &a4);
    for ( j = 0; j < v4[920]; ++j )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4[917] + 4 * j));
    if ( v4 != (uint32_t *)-3692 )
    DynamicVectorClass::AnimTypeConstructor(v4 + 923, 0, 0);
    v4[923] = &TypeList<AnimTypeClass const *>::`vftable';
    (*(void (__stdcall **)(int, int *, int))(*(uint32_t *)v6 + 12))(v6, &a3, 4);
    for ( k = 0; k < a2; ++k )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v6 + 12))(v6, &a3, 4, 0);
    DynamicVector::Add_Alt4(v4 + 923, &a3);
    for ( m = 0; m < v4[927]; ++m )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4[924] + 4 * m));
    v12 = __2_YAPAXI_Z(0x5E8u);
    v4[911] = v12;
    (*(void (__stdcall **)(int, void *, int, uint32_t))(*(uint32_t *)v6 + 12))(v6, v12, 1512, 0);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 897);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 904);
    return v13;
    return result;
}

// 0x00524B60
int __userpurge InfantryTypeClass::SaveLoad_Prefix@<eax>(int a1@<ebx>, uint32_t *a2, int *a3, int a4, int a5)
{
    int result; // eax
    int v6; // ebp
    int v7; // edx
    int i; // ebx
    int v9; // edx
    int j; // ebx
    int v11; // edx
    int k; // ebx
    result = TechnoTypeClass::SaveLoad_Prefix_0(a2, a3, a4);
    v6 = result;
    if ( result >= 0 )
    v7 = *a3;
    a4 = a2[934];
    (*(void (__stdcall **)(int *, int *, int, uint32_t, int))(v7 + 16))(a3, &a4, 4, 0, a1);
    for ( i = 0; i < a5; ++i )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[931] + 4 * i, 4, 0);
    v9 = *a3;
    a5 = a2[920];
    (*(void (__stdcall **)(int *, int *, int, uint32_t))(v9 + 16))(a3, &a5, 4, 0);
    for ( j = 0; j < a5; ++j )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[917] + 4 * j, 4, 0);
    v11 = *a3;
    a5 = a2[927];
    (*(void (__stdcall **)(int *, int *, int, uint32_t))(v11 + 16))(a3, &a5, 4, 0);
    for ( k = 0; k < a5; ++k )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[924] + 4 * k, 4, 0);
    (*(void (__stdcall **)(int *, uint32_t, int))(*a3 + 16))(a3, a2[911], 1512);
    return v6;
    return result;
}

int __stdcall InfantryTypeClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = -1366608936;
    a2[1] = 298976796;
    a2[2] = 1610654892;
    a2[3] = -1252326136;
    return 0;
}

int InfantryTypeClass::_vt11()
{
    return 16;
}

int InfantryTypeClass::_vt12()
{
    return 3792;
}

int  InfantryTypeClass::_vt16(uint32_t *this)
{
    return *(this + 894);
}

int  InfantryTypeClass::_vt08(int Block, char a2)
{
    int v3; // eax
    void *v4; // eax
    void *v5; // eax
    void *v6; // eax
    int v8; // [esp+4h] [ebp-4h] BYREF
    *(uint32_t *)Block = &InfantryTypeClass::`vftable';
    *(uint32_t *)(Block + 4) = &InfantryTypeClass::`vftable';
    *(uint32_t *)(Block + 8) = &InfantryTypeClass::`vftable';
    *(uint32_t *)(Block + 12) = &InfantryTypeClass::`vftable';
    AbstractClass::AnnounceExpiredPointer((void **)Block, 1);
    v8 = Block;
    v3 = (*(int (__thiscall **)(int *, int *))(InfantryTypeClass_Array + 16))(&InfantryTypeClass_Array, &v8);
    if ( v3 != -1 && v3 < g_LoadScreenProgress && v3 < --g_LoadScreenProgress )
    do
    ++v3;
    *((uint32_t *)Factory_ExitCellTable + v3 - 1) = *((uint32_t *)Factory_ExitCellTable + v3);
    while ( v3 < g_LoadScreenProgress );
    __3_YAXPAX_Z(*(void **)(Block + 3644));
    *(uint32_t *)(Block + 3644) = 0;
    v4 = *(void **)(Block + 3724);
    *(uint32_t *)(Block + 3720) = &VectorClass<int>::`vftable';
    if ( v4 && *(uint8_t *)(Block + 3733) )
    __3_YAXPAX_Z(v4);
    *(uint32_t *)(Block + 3724) = 0;
    *(uint8_t *)(Block + 3733) = 0;
    *(uint32_t *)(Block + 3728) = 0;
    v5 = *(void **)(Block + 3696);
    *(uint32_t *)(Block + 3692) = &VectorClass<AnimTypeClass const *>::`vftable';
    if ( v5 && *(uint8_t *)(Block + 3705) )
    __3_YAXPAX_Z(v5);
    *(uint32_t *)(Block + 3696) = 0;
    *(uint8_t *)(Block + 3705) = 0;
    *(uint32_t *)(Block + 3700) = 0;
    v6 = *(void **)(Block + 3668);
    *(uint32_t *)(Block + 3664) = &VectorClass<AnimTypeClass const *>::`vftable';
    if ( v6 && *(uint8_t *)(Block + 3677) )
    __3_YAXPAX_Z(v6);
    *(uint32_t *)(Block + 3668) = 0;
    *(uint8_t *)(Block + 3677) = 0;
    *(uint32_t *)(Block + 3672) = 0;
    TechnoTypeClass::DTOR(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z((void *)Block);
    return Block;
}

uint32_t * InfantryTypeClass::CopyDataArray(uint32_t *this, uint32_t *a2)
{
    int v3; // eax
    void *v4; // eax
    int v5; // ecx
    int v6; // eax
    if ( this == a2 )
    goto LABEL_8;
    (*(void (__thiscall **)(uint32_t *))(*this + 12))(this);
    v3 = a2[2];
    *(this + 2) = v3;
    if ( !v3 )
    *(this + 1) = 0;
    *((uint8_t *)this + 13) = 0;
    LABEL_8:
    *(this + 4) = a2[4];
    *(this + 5) = a2[5];
    return this;
    v4 = __2_YAPAXI_Z(4 * v3);
    *(this + 1) = v4;
    if ( !v4 )
    goto LABEL_8;
    v5 = *(this + 2);
    v6 = 0;
    *((uint8_t *)this + 13) = 1;
    if ( v5 <= 0 )
    goto LABEL_8;
    do
    *(uint32_t *)(*(this + 1) + 4 * v6) = *(uint32_t *)(a2[1] + 4 * v6);
    ++v6;
    while ( v6 < *(this + 2) );
    *(this + 4) = a2[4];
    *(this + 5) = a2[5];
    return this;
}

