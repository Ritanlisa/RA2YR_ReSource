#include "aitriggertypeclass.hpp"

int __stdcall AITriggerTypeClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = -1173801692;
    a2[1] = 298994932;
    a2[2] = 268445372;
    a2[3] = 1303416651;
    return 0;
}

int __stdcall AITriggerTypeClass::_vt05(int *a1, int a2)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    AbstractTypeClass::Init((int)a1, (int)&a2);
    *a1 = (int)&AITriggerTypeClass::`vftable';
    a1[1] = (int)&AITriggerTypeClass::`vftable';
    a1[2] = (int)&AITriggerTypeClass::`vftable';
    a1[3] = (int)&AITriggerTypeClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 54);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 55);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 56);
    return 0;
    return result;
}

int __stdcall AITriggerTypeClass::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

// 0x0041E5E0
int  AITriggerTypeClass::ProcessPower(int this, int *a2)
{
    int v3; // ecx
    int v4; // edx
    int v5; // eax
    int v6; // ecx
    int v7; // eax
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(*(uint32_t *)(this + 152));
    Power::TimerProcess(*(uint32_t *)(this + 156));
    Power::TimerProcess(*(uint32_t *)(this + 160));
    Power::TimerProcess(*(uint32_t *)(this + 168));
    Power::TimerProcess(*(uint32_t *)(this + 176));
    switch ( *(uint32_t *)(this + 152) )
    case 0:
    case 1:
    case 4:
    case 7:
    Power::TimerProcess(*(uint32_t *)(this + 228));
    Power::TimerProcess(*(uint32_t *)(this + 232));
    break;
    default:
    break;
    Checksummer::Add_double(*(uint32_t *)(this + 184), *(uint32_t *)(this + 188));
    Checksummer::Add_double(*(uint32_t *)(this + 192), *(uint32_t *)(this + 196));
    Checksummer::Add_double(*(uint32_t *)(this + 200), *(uint32_t *)(this + 204));
    LOBYTE(v3) = *(uint8_t *)(this + 208);
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = *(uint8_t *)(this + 210);
    v5 = Power::FlagProcess(a2, v4);
    LOBYTE(v5) = *(uint8_t *)(this + 211);
    Power::FlagProcess(a2, v5);
    LOBYTE(v6) = *(uint8_t *)(this + 212);
    Power::FlagProcess(a2, v6);
    v7 = Power::TimerProcess(*(uint32_t *)(this + 172));
    LOBYTE(v7) = *(uint8_t *)(this + 209);
    return Power::FlagProcess(a2, v7);
}

// 0x0041EAF0
bool  AITriggerTypeClass::EnemyHouseOwns(uint32_t *this, int a2, uint32_t *a3)
{
    int v4; // esi
    int v5; // ebp
    int v6; // edi
    int v7; // eax
    bool result; // al
    char v9; // [esp+7h] [ebp-1h]
    v9 = 0;
    if ( !a3 )
    return v9;
    v4 = *(this + 54);
    if ( v4 )
    v5 = (*(int (__thiscall **)(int))(*(uint32_t *)v4 + 64))(v4);
    v6 = 0;
    switch ( (*(int (__thiscall **)(int))(*(uint32_t *)v4 + 44))(v4) )
    case 3:
    v6 = DynamicVector::GetOrGrow(a3 + 5475, v5);
    goto LABEL_8;
    case 7:
    v7 = DynamicVector::GetOrGrow(a3 + 5460, v5);
    break;
    case 16:
    v7 = DynamicVector::GetOrGrow(a3 + 5470, v5);
    break;
    case 40:
    v7 = DynamicVector::GetOrGrow(a3 + 5465, v5);
    break;
    default:
    LABEL_8:
    v7 = v6;
    break;
    else
    v7 = 0;
    switch ( *(this + 58) )
    case 0:
    result = v7 < *(this + 57);
    break;
    case 1:
    result = v7 <= *(this + 57);
    break;
    case 2:
    result = v7 == *(this + 57);
    break;
    case 3:
    result = v7 >= *(this + 57);
    break;
    case 4:
    result = v7 > *(this + 57);
    break;
    case 5:
    return v7 != *(this + 57);
    default:
    return v9;
    return result;
}

// 0x0041EC90
bool  AITriggerTypeClass::CivilianHouseOwns(uint32_t *this, int a2, int a3)
{
    uint32_t *v3; // edi
    int v4; // esi
    bool result; // al
    uint32_t *v6; // ebx
    int v7; // esi
    int v8; // ebp
    int v9; // edi
    int v10; // eax
    char v11; // [esp+Fh] [ebp-5h]
    v3 = this;
    v4 = 0;
    v11 = 0;
    if ( HouseClass_Count <= 0 )
    return v11;
    while ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)&HouseClass_Array->gap0[4 * v4] + 52) + 188) != HouseTypeClass::Find(g_INI_Key_Civilian) )
    if ( ++v4 >= HouseClass_Count )
    return 0;
    v6 = *(uint32_t **)&HouseClass_Array->gap0[4 * v4];
    if ( !v6 )
    return v11;
    v7 = v3[54];
    if ( v7 )
    v8 = (*(int (__thiscall **)(int))(*(uint32_t *)v7 + 64))(v7);
    v9 = 0;
    switch ( (*(int (__thiscall **)(int))(*(uint32_t *)v7 + 44))(v7) )
    case 3:
    v9 = DynamicVector::GetOrGrow(v6 + 5475, v8);
    goto LABEL_12;
    case 7:
    v10 = DynamicVector::GetOrGrow(v6 + 5460, v8);
    v3 = this;
    break;
    case 16:
    v10 = DynamicVector::GetOrGrow(v6 + 5470, v8);
    v3 = this;
    break;
    case 40:
    v10 = DynamicVector::GetOrGrow(v6 + 5465, v8);
    v3 = this;
    break;
    default:
    LABEL_12:
    v10 = v9;
    v3 = this;
    break;
    else
    v10 = 0;
    switch ( v3[58] )
    case 0:
    result = v10 < v3[57];
    break;
    case 1:
    result = v10 <= v3[57];
    break;
    case 2:
    result = v10 == v3[57];
    break;
    case 3:
    result = v10 >= v3[57];
    break;
    case 4:
    result = v10 > v3[57];
    break;
    case 5:
    return v10 != v3[57];
    default:
    return v11;
    return result;
}

// 0x0041EE90
bool  AITriggerTypeClass::OwnerHouseOwns(uint32_t *this, uint32_t *a2, int a3)
{
    int v4; // esi
    int v5; // ebp
    int v6; // edi
    int v7; // eax
    bool result; // al
    char v9; // [esp+7h] [ebp-1h]
    v9 = 0;
    if ( !a2 )
    return v9;
    v4 = *(this + 54);
    if ( v4 )
    v5 = (*(int (__thiscall **)(int))(*(uint32_t *)v4 + 64))(v4);
    v6 = 0;
    switch ( (*(int (__thiscall **)(int))(*(uint32_t *)v4 + 44))(v4) )
    case 3:
    v6 = DynamicVector::GetOrGrow(a2 + 5475, v5);
    goto LABEL_8;
    case 7:
    v7 = DynamicVector::GetOrGrow(a2 + 5460, v5);
    break;
    case 16:
    v7 = DynamicVector::GetOrGrow(a2 + 5470, v5);
    break;
    case 40:
    v7 = DynamicVector::GetOrGrow(a2 + 5465, v5);
    break;
    default:
    LABEL_8:
    v7 = v6;
    break;
    else
    v7 = 0;
    switch ( *(this + 58) )
    case 0:
    result = v7 < *(this + 57);
    break;
    case 1:
    result = v7 <= *(this + 57);
    break;
    case 2:
    result = v7 == *(this + 57);
    break;
    case 3:
    result = v7 >= *(this + 57);
    break;
    case 4:
    result = v7 > *(this + 57);
    break;
    case 5:
    return v7 != *(this + 57);
    default:
    return v9;
    return result;
}

// 0x0041F0D0
bool __stdcall AITriggerTypeClass::IronCurtainCharged(int a1, int a2)
{
    int v2; // edx
    int v3; // eax
    int i; // ecx
    int v6; // eax
    int v7; // esi
    int v8; // ecx
    int v9; // [esp+8h] [ebp+4h]
    if ( !a1 )
    return 0;
    v2 = *(uint32_t *)(a1 + 612);
    v3 = 0;
    if ( v2 <= 0 )
    return 0;
    for ( i = *(uint32_t *)(a1 + 600); *(uint32_t *)(*(uint32_t *)(*(uint32_t *)i + 40) + 180) != 1; i += 4 )
    if ( ++v3 >= v2 )
    return 0;
    v6 = *(uint32_t *)(*(uint32_t *)(a1 + 600) + 4 * v3);
    if ( !v6 || !*(uint8_t *)(v6 + 109) )
    return 0;
    v7 = *(uint32_t *)(v6 + 48);
    v8 = *(uint32_t *)(v6 + 56);
    if ( v7 == -1 )
    goto LABEL_12;
    if ( (int)CurrentFrame - v7 < v8 )
    v8 -= (int)CurrentFrame - v7;
    LABEL_12:
    v9 = v8;
    return 1.0 - *(float *)&RulesClass_Instance->RefineryRatio >= (double)v9
    / (double)Super::GetDefaultTimer((uint32_t *)v6);
    v9 = 0;
    return 1.0 - *(float *)&RulesClass_Instance->RefineryRatio >= (double)v9
    / (double)Super::GetDefaultTimer((uint32_t *)v6);
}

// 0x0041F180
bool __stdcall AITriggerTypeClass::ChronoSphereCharged(int a1, int a2)
{
    int v2; // edx
    int v3; // eax
    int i; // ecx
    int v6; // eax
    int v7; // esi
    int v8; // ecx
    int v9; // [esp+8h] [ebp+4h]
    if ( !a1 )
    return 0;
    v2 = *(uint32_t *)(a1 + 612);
    v3 = 0;
    if ( v2 <= 0 )
    return 0;
    for ( i = *(uint32_t *)(a1 + 600); *(uint32_t *)(*(uint32_t *)(*(uint32_t *)i + 40) + 180) != 3; i += 4 )
    if ( ++v3 >= v2 )
    return 0;
    v6 = *(uint32_t *)(*(uint32_t *)(a1 + 600) + 4 * v3);
    if ( !v6 || !*(uint8_t *)(v6 + 109) )
    return 0;
    v7 = *(uint32_t *)(v6 + 48);
    v8 = *(uint32_t *)(v6 + 56);
    if ( v7 == -1 )
    goto LABEL_12;
    if ( (int)CurrentFrame - v7 < v8 )
    v8 -= (int)CurrentFrame - v7;
    LABEL_12:
    v9 = v8;
    return 1.0 - *(float *)&RulesClass_Instance->RefineryRatio >= (double)v9
    / (double)Super::GetDefaultTimer((uint32_t *)v6);
    v9 = 0;
    return 1.0 - *(float *)&RulesClass_Instance->RefineryRatio >= (double)v9
    / (double)Super::GetDefaultTimer((uint32_t *)v6);
}

// 0x0041F230
bool  AITriggerTypeClass::HouseCredits(uint32_t *this, int a2, int a3)
{
    char v3; // bl
    int v5; // eax
    bool result; // al
    v3 = 0;
    if ( !a3 )
    return v3;
    v5 = (*(int (__stdcall **)(int))(*(uint32_t *)(a3 + 36) + 24))(a3 + 36);
    switch ( *(this + 58) )
    case 0:
    result = v5 < *(this + 57);
    break;
    case 1:
    result = v5 <= *(this + 57);
    break;
    case 2:
    result = v5 == *(this + 57);
    break;
    case 3:
    result = v5 >= *(this + 57);
    break;
    case 4:
    result = v5 > *(this + 57);
    break;
    case 5:
    return v5 != *(this + 57);
    default:
    return v3;
    return result;
}

char  AITriggerTypeClass::vt_25_(int this, unsigned __int8 ***a2)
{
    char *v3; // eax
    char *v4; // eax
    char *v5; // eax
    int v6; // eax
    char *v7; // eax
    char *v8; // eax
    int v9; // esi
    int ExitCellByName; // eax
    int Index; // eax
    uint32_t *v12; // edx
    int v13; // eax
    char *v14; // eax
    unsigned int v15; // edi
    bool v16; // zf
    char *v17; // esi
    int v18; // ecx
    char v19; // dl
    char v20; // al
    char *v21; // eax
    double v22; // st7
    char *v23; // eax
    double v24; // st7
    char *v25; // eax
    double v26; // st7
    char *v27; // eax
    char *v28; // eax
    char *v29; // eax
    char *v30; // eax
    char *v31; // eax
    char *v32; // eax
    char *v33; // eax
    int v34; // eax
    int v35; // esi
    int MaxBuildLevel; // eax
    int v37; // eax
    int v38; // esi
    char v40[4]; // [esp+10h] [ebp-270h] BYREF
    __int64 v41; // [esp+14h] [ebp-26Ch] BYREF
    char v42[23]; // [esp+1Ch] [ebp-264h] BYREF
    char v43; // [esp+33h] [ebp-24Dh]
    char v44[24]; // [esp+34h] [ebp-24Ch] BYREF
    char Destination[48]; // [esp+4Ch] [ebp-234h] BYREF
    char v46; // [esp+7Ch] [ebp-204h]
    char String[512]; // [esp+80h] [ebp-200h] BYREF
    INIClass::ResetSection(a2);
    if ( !INIClass::GetString(
    a2,
    (unsigned __int8 *)aAitriggertypes,
    (unsigned __int8 *)(this + 36),
    &g_INI_DefaultBuffer,
    String,
    512) )
    return 0;
    v3 = strtok(String, Delimiter);
    if ( !v3 )
    return 0;
    strncpy(Destination, v3, 0x30u);
    v46 = 0;
    if ( Destination != (char *)(this + 100) )
    qmemcpy((void *)(this + 100), Destination, 0x30u);
    *(uint8_t *)(this + 148) = v46;
    v4 = strtok(0, Delimiter);
    if ( !v4 )
    return 0;
    strncpy(v42, v4, 0x18u);
    v43 = 0;
    String::Trim(v42);
    *(uint32_t *)(this + 220) = 0;
    if ( _strcmpi(v42, off_818114) )
    *(uint32_t *)(this + 220) = TeamTypeClass::FindByName(v42);
    v5 = strtok(0, Delimiter);
    if ( !v5 )
    return 0;
    strncpy(v42, v5, 0x18u);
    v43 = 0;
    String::Trim(v42);
    *(uint32_t *)(this + 160) = 0;
    *(uint32_t *)(this + 168) = -1;
    if ( _strcmpi(v42, off_818118) )
    if ( _strcmpi(v42, off_818114) )
    v6 = SuperWeaponTypeClass::FindByName(v42);
    *(uint32_t *)(this + 168) = v6;
    if ( v6 != -1 )
    *(uint32_t *)(this + 160) = 1;
    else
    *(uint32_t *)(this + 160) = 2;
    if ( !strtok(0, Delimiter) )
    return 0;
    *(uint32_t *)(this + 176) = 0;
    v7 = strtok(0, Delimiter);
    if ( !v7 )
    return 0;
    *(uint32_t *)(this + 152) = atoi(v7);
    v8 = strtok(0, Delimiter);
    if ( !v8 )
    return 0;
    strncpy(v42, v8, 0x18u);
    v43 = 0;
    String::Trim(v42);
    v9 = 0;
    ExitCellByName = Factory::FindExitCellByName(v42);
    if ( ExitCellByName != -1 )
    v9 = *((uint32_t *)Factory_ExitCellTable + ExitCellByName);
    goto LABEL_26;
    Index = BuildingTypeClass::FindIndex(v42);
    if ( Index != -1 )
    v12 = g_UnitTypeCount2;
    LABEL_25:
    v9 = v12[Index];
    goto LABEL_26;
    v13 = TypeClass::FindByName(v42);
    if ( v13 != -1 )
    v9 = *((uint32_t *)g_AircraftTypeCount + v13);
    goto LABEL_26;
    Index = BuildingTypeClass::FindIndexByName(v42);
    if ( Index != -1 )
    v12 = g_TriggerTypeCount;
    goto LABEL_25;
    LABEL_26:
    *(uint32_t *)(this + 216) = v9;
    v14 = strtok(0, Delimiter);
    if ( !v14 )
    return 0;
    strcpy(v40, "00");
    v15 = 0;
    v16 = *v14 == 0;
    v17 = v14;
    LODWORD(v41) = 0;
    if ( !v16 )
    do
    if ( isspace(*v17) )
    do
    v18 = *++v17;
    while ( isspace(v18) );
    v19 = *v17;
    v20 = *++v17;
    v40[0] = v19;
    if ( v20 )
    v40[1] = v20;
    ++v17;
    else
    v40[1] = 0;
    if ( v15 >= 0x20 )
    break;
    *(uint8_t *)(v15 + this + 228) = globalHelper_0C9DBD(v40, &v41, 16);
    ++v15;
    while ( *v17 );
    v21 = strtok(0, Delimiter);
    if ( v21 )
    v22 = atof(v21);
    v41 = (unsigned int)Math::RoundToInt(v22);
    *(double *)(this + 184) = (double)v41;
    v23 = strtok(0, Delimiter);
    if ( v23 )
    v24 = atof(v23);
    v41 = (unsigned int)Math::RoundToInt(v24);
    *(double *)(this + 192) = (double)v41;
    v25 = strtok(0, Delimiter);
    if ( v25 )
    v26 = atof(v25);
    v41 = (unsigned int)Math::RoundToInt(v26);
    *(double *)(this + 200) = (double)v41;
    v27 = strtok(0, Delimiter);
    if ( v27 )
    *(uint8_t *)(this + 208) = atoi(v27) != 0;
    strtok(0, Delimiter);
    v28 = strtok(0, Delimiter);
    if ( v28 )
    *(uint32_t *)(this + 172) = atoi(v28);
    v29 = strtok(0, Delimiter);
    if ( v29 )
    *(uint8_t *)(this + 209) = atoi(v29) != 0;
    v30 = strtok(0, Delimiter);
    if ( v30 )
    strncpy(v44, v30, 0x18u);
    v44[23] = 0;
    String::Trim(v44);
    *(uint32_t *)(this + 224) = 0;
    if ( _strcmpi(v44, off_818114) )
    *(uint32_t *)(this + 224) = TeamTypeClass::FindByName(v44);
    v31 = strtok(0, Delimiter);
    if ( v31 )
    *(uint8_t *)(this + 210) = atoi(v31) != 0;
    v32 = strtok(0, Delimiter);
    if ( v32 )
    *(uint8_t *)(this + 211) = atoi(v32) != 0;
    v33 = strtok(0, Delimiter);
    if ( v33 )
    *(uint8_t *)(this + 212) = atoi(v33) != 0;
    v34 = *(uint32_t *)(this + 220);
    if ( v34 )
    v35 = *(uint32_t *)(this + 176);
    if ( v35 <= HouseClass::GetMaxBuildLevel(*(int **)(v34 + 228)) )
    MaxBuildLevel = HouseClass::GetMaxBuildLevel(*(int **)(*(uint32_t *)(this + 220) + 228));
    else
    MaxBuildLevel = v35;
    *(uint32_t *)(this + 176) = MaxBuildLevel;
    v37 = *(uint32_t *)(this + 224);
    if ( v37 )
    v38 = *(uint32_t *)(this + 176);
    if ( v38 > HouseClass::GetMaxBuildLevel(*(int **)(v37 + 228)) )
    *(uint32_t *)(this + 176) = v38;
    return 1;
    *(uint32_t *)(this + 176) = HouseClass::GetMaxBuildLevel(*(int **)(*(uint32_t *)(this + 224) + 228));
    return 1;
}

// 0x0041FD60
int  AITriggerTypeClass::RegisterSuccess(int this)
{
    int v1; // edx
    double v2; // st7
    double v3; // st7
    int result; // eax
    v1 = *(uint32_t *)(this + 264);
    v2 = 0.0;
    if ( v1 > 0 )
    v2 = (double)*(int *)(this + 264) * ((double)*(int *)(this + 260) / (double)*(int *)(this + 264) - 0.5);
    if ( v2 < 0.0 )
    v2 = 0.0;
    v3 = v2 + *(double *)&RulesClass_Instance->AITriggerFailureWeightDelta + *(double *)(this + 184);
    *(double *)(this + 184) = v3;
    if ( v3 < *(double *)(this + 192) )
    *(uint32_t *)(this + 184) = *(uint32_t *)(this + 192);
    *(uint32_t *)(this + 188) = *(uint32_t *)(this + 196);
    if ( *(double *)(this + 184) > *(double *)(this + 200) )
    *(uint32_t *)(this + 184) = *(uint32_t *)(this + 200);
    *(uint32_t *)(this + 188) = *(uint32_t *)(this + 204);
    result = *(uint32_t *)(this + 260) + 1;
    *(uint32_t *)(this + 260) = result;
    *(uint32_t *)(this + 264) = v1 + 1;
    return result;
}

// 0x0041FE20
int  AITriggerTypeClass::RegisterFailure(int this)
{
    int v1; // edx
    double v2; // st7
    double v3; // st7
    int result; // eax
    __int16 v5; // fps
    double v6; // st7
    bool v7; // c0
    char v8; // c2
    bool v9; // c3
    v1 = *(uint32_t *)(this + 264);
    v2 = 0.0;
    if ( v1 > 0 )
    v2 = (double)v1
    * (((double)*(int *)(this + 260) / (double)v1 - 0.5)
    * *(double *)&RulesClass_Instance->VeinholeMonsterStrength);
    if ( v2 > 0.0 )
    v2 = 0.0;
    v3 = v2 + *(double *)&RulesClass_Instance->AITriggerTrackRecordCoefficient + *(double *)(this + 184);
    *(double *)(this + 184) = v3;
    if ( v3 < *(double *)(this + 192) )
    *(uint32_t *)(this + 184) = *(uint32_t *)(this + 192);
    result = *(uint32_t *)(this + 196);
    *(uint32_t *)(this + 188) = result;
    v6 = *(double *)(this + 184);
    v7 = v6 < *(double *)(this + 200);
    v8 = 0;
    v9 = v6 == *(double *)(this + 200);
    LOWORD(result) = v5;
    if ( v6 > *(double *)(this + 200) )
    *(uint32_t *)(this + 184) = *(uint32_t *)(this + 200);
    result = *(uint32_t *)(this + 204);
    *(uint32_t *)(this + 188) = result;
    *(uint32_t *)(this + 264) = v1 + 1;
    return result;
}

int AITriggerTypeClass::_vt11()
{
    return 59;
}

int AITriggerTypeClass::_vt12()
{
    return 272;
}

uint32_t * AITriggerTypeClass::_vt08(uint32_t *Block, char a2)
{
    int v3; // eax
    uint32_t *v5; // [esp+4h] [ebp-4h] BYREF
    *Block = &AITriggerTypeClass::`vftable';
    *(Block + 1) = &AITriggerTypeClass::`vftable';
    *(Block + 2) = &AITriggerTypeClass::`vftable';
    *(Block + 3) = &AITriggerTypeClass::`vftable';
    v5 = Block;
    v3 = (*(int (__thiscall **)(int *, uint32_t **))(AITriggerTypeClass_Array + 16))(&AITriggerTypeClass_Array, &v5);
    if ( v3 != -1 && v3 < g_AnimTypeInitQueue && v3 < --g_AnimTypeInitQueue )
    do
    ++v3;
    *((uint32_t *)dword_A8B204 + v3 - 1) = *((uint32_t *)dword_A8B204 + v3);
    while ( v3 < g_AnimTypeInitQueue );
    AbstractTypeClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

