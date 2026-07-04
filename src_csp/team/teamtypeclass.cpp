#include "teamtypeclass.hpp"

uint32_t * TeamTypeClass::FindOrCreateTaskForce(char *Source)
{
    int v2; // esi
    uint32_t *v3; // eax
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) )
    return 0;
    v2 = 0;
    if ( g_MultiplayerLogFlags <= 0 )
    LABEL_6:
    v3 = __2_YAPAXI_Z(0xD4u);
    if ( v3 )
    return TaskForceClass::Construct(v3, Source);
    return 0;
    while ( _strcmpi((const void *)(*((uint32_t *)g_MultiplayerLogEntry + v2) + 36), Source) )
    if ( ++v2 >= g_MultiplayerLogFlags )
    goto LABEL_6;
    return (uint32_t *)*((uint32_t *)g_MultiplayerLogEntry + v2);
}

int  TeamTypeClass::DestroyAllInstances(void *this)
{
    int result; // eax
    int i; // esi
    uint32_t *v4; // ecx
    result = g_HouseClass_AIProductionState;
    for ( i = 0; i < g_HouseClass_AIProductionState; ++i )
    v4 = (uint32_t *)*((uint32_t *)g_TeamClassPool + i);
    if ( this == (void *)v4[9] )
    if ( v4 )
    (*(void (__thiscall **)(uint32_t *, int))(*v4 + 32))(v4, 1);
    --i;
    result = g_HouseClass_AIProductionState;
    return result;
}

int  TeamTypeClass::FindByName(void *this)
{
    int v2; // esi
    if ( !this )
    return 0;
    v2 = 0;
    if ( g_MultiplayerLogState <= 0 )
    return 0;
    while ( _strcmpi(this, (const void *)(*((uint32_t *)g_TeamTypePool + v2) + 36))
    && _strcmpi(this, (const void *)(*((uint32_t *)g_TeamTypePool + v2) + 100)) )
    if ( ++v2 >= g_MultiplayerLogState )
    return 0;
    return *((uint32_t *)g_TeamTypePool + v2);
}

int  TeamTypeClass::_vt10(uint32_t *this, int a2, int a3)
{
    int result; // eax
    int v4; // ecx
    result = a2;
    if ( *(this + 52) == a2 )
    *(this + 52) = 0;
    if ( *(this + 49) == a2 )
    *(this + 49) = 0;
    if ( *(this + 57) == a2 )
    *(this + 57) = 0;
    if ( *(this + 56) == a2 )
    *(this + 56) = 0;
    v4 = *(this + 56);
    if ( v4 )
    return (*(int (__thiscall **)(int, int, int))(*(uint32_t *)v4 + 40))(v4, a2, a3);
    return result;
}

char  TeamTypeClass::LoadFromINI(int this, unsigned __int8 ***a2)
{
    int v3; // ecx
    int v4; // eax
    void *v5; // ebp
    int Int_Overwrite; // eax
    char Bool_Overwrite; // al
    char v8; // cl
    char v9; // al
    char v10; // al
    char v11; // cl
    char v12; // al
    char v13; // al
    char v14; // cl
    char v15; // al
    char v16; // al
    char v17; // cl
    char v18; // al
    char v19; // al
    char v20; // cl
    char v21; // al
    int v22; // eax
    int v23; // ecx
    int v24; // eax
    int v25; // eax
    int v26; // ebp
    int v27; // eax
    int v28; // ecx
    int v29; // eax
    char v30; // al
    char v31; // cl
    char v32; // al
    char v33; // al
    char v34; // cl
    char v35; // al
    int v36; // ecx
    char *v37; // eax
    char *v38; // eax
    int v39; // ebp
    int v40; // eax
    int v41; // ebp
    int v42; // eax
    int v44; // [esp-Ch] [ebp-D4h]
    char v45; // [esp-Ch] [ebp-D4h]
    char v46; // [esp-Ch] [ebp-D4h]
    char v47; // [esp-Ch] [ebp-D4h]
    char v48; // [esp-Ch] [ebp-D4h]
    char v49; // [esp-Ch] [ebp-D4h]
    int v50; // [esp-Ch] [ebp-D4h]
    char v51; // [esp-Ch] [ebp-D4h]
    char v52; // [esp-Ch] [ebp-D4h]
    char v53[64]; // [esp+8h] [ebp-C0h] BYREF
    char Destination[128]; // [esp+48h] [ebp-80h] BYREF
    INIClass::ResetSection(a2);
    if ( !AbstractTypeClass::LoadFromINI(this, a2) )
    return 0;
    v3 = *(uint32_t *)(this + 196);
    v4 = -1;
    if ( v3 )
    v4 = *(uint32_t *)(*(uint32_t *)(v3 + 52) + 184);
    v5 = (void *)SuperWeaponTypeClass::FindOrCreate(a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aHouse, v4);
    if ( BuildingType::IsSpecialType(v5) )
    *(uint32_t *)(this + 200) = v5;
    *(uint32_t *)(this + 196) = 0;
    else if ( v5 != (void *)-1 )
    *(uint32_t *)(this + 196) = HouseClass::FindOwner(v5);
    *(uint32_t *)(this + 200) = -1;
    Int_Overwrite = INIClass::ReadInt_Overwrite(this + 36, aVeteranlevel, *(uint32_t *)(this + 160));
    v44 = *(uint32_t *)(this + 192);
    *(uint32_t *)(this + 160) = Int_Overwrite;
    *(uint32_t *)(this + 192) = INIClass::ReadInt_Overwrite(this + 36, aMindcontroldec, v44);
    Bool_Overwrite = INIClass::ReadBool_Overwrite(this + 36, aLoadable, *(uint8_t *)(this + 164));
    v8 = *(uint8_t *)(this + 165);
    *(uint8_t *)(this + 164) = Bool_Overwrite;
    v9 = INIClass::ReadBool_Overwrite(this + 36, aFull, v8);
    v45 = *(uint8_t *)(this + 166);
    *(uint8_t *)(this + 165) = v9;
    *(uint8_t *)(this + 166) = INIClass::ReadBool_Overwrite(this + 36, aAnnoyance, v45);
    v10 = INIClass::ReadBool_Overwrite(this + 36, aGuardslower, *(uint8_t *)(this + 167));
    v11 = *(uint8_t *)(this + 169);
    *(uint8_t *)(this + 167) = v10;
    v12 = INIClass::ReadBool_Overwrite(this + 36, aAutocreate, v11);
    v46 = *(uint8_t *)(this + 170);
    *(uint8_t *)(this + 169) = v12;
    *(uint8_t *)(this + 170) = INIClass::ReadBool_Overwrite(this + 36, aPrebuild, v46);
    v13 = INIClass::ReadBool_Overwrite(this + 36, aReinforce, *(uint8_t *)(this + 171));
    v14 = *(uint8_t *)(this + 176);
    *(uint8_t *)(this + 171) = v13;
    v15 = INIClass::ReadBool_Overwrite(this + 36, aDroppod_0, v14);
    v47 = *(uint8_t *)(this + 177);
    *(uint8_t *)(this + 176) = v15;
    *(uint8_t *)(this + 177) = INIClass::ReadBool_Overwrite(this + 36, aUsetransportor, v47);
    v16 = INIClass::ReadBool_Overwrite(this + 36, aRecruiter, *(uint8_t *)(this + 168));
    v17 = *(uint8_t *)(this + 172);
    *(uint8_t *)(this + 168) = v16;
    v18 = INIClass::ReadBool_Overwrite(this + 36, aWhiner, v17);
    v48 = *(uint8_t *)(this + 175);
    *(uint8_t *)(this + 172) = v18;
    *(uint8_t *)(this + 175) = INIClass::ReadBool_Overwrite(this + 36, g_INI_Key_Suicide, v48);
    v19 = INIClass::ReadBool_Overwrite(this + 36, aLooserecruit, *(uint8_t *)(this + 174));
    v20 = *(uint8_t *)(this + 173);
    *(uint8_t *)(this + 174) = v19;
    v21 = INIClass::ReadBool_Overwrite(this + 36, aAggressive, v20);
    v49 = *(uint8_t *)(this + 179);
    *(uint8_t *)(this + 173) = v21;
    *(uint8_t *)(this + 179) = INIClass::ReadBool_Overwrite(this + 36, aOntransonly, v49);
    v22 = INIClass::ReadInt_Overwrite(this + 36, g_INI_Key_Priority, *(uint32_t *)(this + 180));
    v23 = *(uint32_t *)(this + 184);
    *(uint32_t *)(this + 180) = v22;
    v24 = INIClass::ReadInt_Overwrite(this + 36, aMax, v23);
    v50 = *(uint32_t *)(this + 204);
    *(uint32_t *)(this + 184) = v24;
    v25 = INIClass::ReadInt_Overwrite(this + 36, g_INI_Key_TechLevel, v50);
    v26 = *(uint32_t *)(this + 208);
    *(uint32_t *)(this + 204) = v25;
    if ( INIClass::GetString(
    a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)off_81728C,
    &g_INI_DefaultBuffer,
    Destination,
    128) )
    v27 = TagTypeClass::FindOrCreate(Destination);
    else
    v27 = v26;
    v28 = *(uint32_t *)(this + 156);
    *(uint32_t *)(this + 208) = v27;
    v29 = INIClass::ReadInt_Overwrite(this + 36, g_INI_Key_Group, v28);
    v51 = *(uint8_t *)(this + 242);
    *(uint32_t *)(this + 156) = v29;
    *(uint8_t *)(this + 242) = INIClass::ReadBool_Overwrite(this + 36, aAvoidthreats, v51);
    v30 = INIClass::ReadBool_Overwrite(this + 36, aIonimmune, *(uint8_t *)(this + 243));
    v31 = *(uint8_t *)(this + 246);
    *(uint8_t *)(this + 243) = v30;
    v32 = INIClass::ReadBool_Overwrite(this + 36, g_INI_Key_IsBaseDefense, v31);
    v52 = *(uint8_t *)(this + 247);
    *(uint8_t *)(this + 246) = v32;
    *(uint8_t *)(this + 247) = INIClass::ReadBool_Overwrite(this + 36, aOnlytargethous, v52);
    v33 = INIClass::ReadBool_Overwrite(this + 36, aTransportsretu, *(uint8_t *)(this + 244));
    v34 = *(uint8_t *)(this + 245);
    *(uint8_t *)(this + 244) = v33;
    v35 = INIClass::ReadBool_Overwrite(this + 36, aAreteammembers, v34);
    v36 = *(uint32_t *)(this + 212);
    *(uint8_t *)(this + 245) = v35;
    v37 = (char *)Waypoint::To_String(v36);
    if ( (int)INIClass::GetString(a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aWaypoint, v37, v53, 64) > 0 )
    *(uint32_t *)(this + 212) = String::To_Waypoint(v53);
    v38 = (char *)Waypoint::To_String(*(uint32_t *)(this + 216));
    if ( (int)INIClass::GetString(a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aTransportwaypo, v38, v53, 64) > 0 )
    *(uint32_t *)(this + 216) = String::To_Waypoint(v53);
    v39 = *(uint32_t *)(this + 224);
    if ( INIClass::GetString(
    a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aScript,
    &g_INI_DefaultBuffer,
    Destination,
    128) )
    v40 = TeamTypeClass::CreateScriptType(Destination);
    else
    v40 = v39;
    v41 = *(uint32_t *)(this + 228);
    *(uint32_t *)(this + 224) = v40;
    if ( INIClass::GetString(
    a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aTaskforce,
    &g_INI_DefaultBuffer,
    Destination,
    128) )
    v42 = TeamTypeClass::FindOrCreateTaskForce(Destination);
    else
    v42 = v41;
    *(uint32_t *)(this + 228) = v42;
    if ( !v42 )
    if ( g_MultiplayerLogFlags <= 0 )
    return 0;
    *(uint32_t *)(this + 228) = *(uint32_t *)g_MultiplayerLogEntry;
    if ( *(uint32_t *)(this + 224) )
    return 1;
    if ( g_MultiplayerDebugState > 0 )
    *(uint32_t *)(this + 224) = *(uint32_t *)g_MultiplayerSyncState;
    return 1;
    return 0;
}

char  TeamTypeClass::_vt26(int this, char *a2)
{
    int v3; // eax
    int v4; // ebp
    unsigned __int8 *v5; // edi
    int v6; // eax
    char *v7; // eax
    char *v8; // eax
    int v9; // eax
    int v10; // esi
    if ( !AbstractTypeClass::WriteINI((char *)this, a2) )
    return 0;
    v3 = *(uint32_t *)(this + 196);
    v4 = -1;
    if ( v3 )
    v4 = *(uint32_t *)(*(uint32_t *)(v3 + 52) + 184);
    else if ( BuildingType::IsSpecialType(*(void **)(this + 200)) )
    v4 = *(uint32_t *)(this + 200);
    v5 = (unsigned __int8 *)(this + 36);
    INIClass::SetInt(a2, (unsigned __int8 *)(this + 36), aVeteranlevel, *(uint32_t *)(this + 160), 0);
    INIClass::SetInt(a2, (unsigned __int8 *)(this + 36), aMindcontroldec, *(uint32_t *)(this + 192), 0);
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), aLoadable, *(uint8_t *)(this + 164));
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), aFull, *(uint8_t *)(this + 165));
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), aAnnoyance, *(uint8_t *)(this + 166));
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), aGuardslower, *(uint8_t *)(this + 167));
    INIClass::SetHouseName(a2, (unsigned __int8 *)(this + 36), aHouse, (void *)v4);
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), aRecruiter, *(uint8_t *)(this + 168));
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), aAutocreate, *(uint8_t *)(this + 169));
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), aPrebuild, *(uint8_t *)(this + 170));
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), aReinforce, *(uint8_t *)(this + 171));
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), aDroppod_0, *(uint8_t *)(this + 176));
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), aUsetransportor, *(uint8_t *)(this + 177));
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), aWhiner, *(uint8_t *)(this + 172));
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), aLooserecruit, *(uint8_t *)(this + 174));
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), aAggressive, *(uint8_t *)(this + 173));
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), g_INI_Key_Suicide, *(uint8_t *)(this + 175));
    INIClass::SetInt(a2, (unsigned __int8 *)(this + 36), g_INI_Key_Priority, *(uint32_t *)(this + 180), 0);
    INIClass::SetInt(a2, (unsigned __int8 *)(this + 36), aMax, *(uint32_t *)(this + 184), 0);
    INIClass::SetInt(a2, (unsigned __int8 *)(this + 36), g_INI_Key_TechLevel, *(uint32_t *)(this + 204), 0);
    INIClass::SetInt(a2, (unsigned __int8 *)(this + 36), g_INI_Key_Group, *(uint32_t *)(this + 156), 0);
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), aOntransonly, *(uint8_t *)(this + 179));
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), aAvoidthreats, *(uint8_t *)(this + 242));
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), aIonimmune, *(uint8_t *)(this + 243));
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), aTransportsretu, *(uint8_t *)(this + 244));
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), aAreteammembers, *(uint8_t *)(this + 245));
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), g_INI_Key_IsBaseDefense, *(uint8_t *)(this + 246));
    INIClass::SetBool(a2, (unsigned __int8 *)(this + 36), aOnlytargethous, *(uint8_t *)(this + 247));
    v6 = *(uint32_t *)(this + 208);
    if ( v6 )
    INIClass::SetString(a2, (unsigned __int8 *)(this + 36), off_81728C, (char *)(v6 + 36));
    v7 = Waypoint::To_String(*(uint32_t *)(this + 212));
    INIClass::SetString(a2, (unsigned __int8 *)(this + 36), aWaypoint, v7);
    v8 = Waypoint::To_String(*(uint32_t *)(this + 216));
    INIClass::SetString(a2, (unsigned __int8 *)(this + 36), aTransportwaypo, v8);
    v9 = *(uint32_t *)(this + 224);
    if ( v9 )
    INIClass::SetString(a2, (unsigned __int8 *)(this + 36), aScript, (char *)(v9 + 36));
    v10 = *(uint32_t *)(this + 228);
    if ( v10 )
    INIClass::SetString(a2, v5, aTaskforce, (char *)(v10 + 36));
    return 1;
}

// 0x006F1870
int  TeamTypeClass::GetGroup(uint32_t *this)
{
    int result; // eax
    int v2; // ecx
    result = *(this + 39);
    if ( result == -1 )
    v2 = *(this + 57);
    if ( v2 )
    return *(uint32_t *)(v2 + 152);
    return result;
}

uint32_t * TeamTypeClass::GetTransportWaypoint(int *this, uint32_t *a2)
{
    int v2; // eax
    int v4; // ecx
    int *v5; // [esp+0h] [ebp-4h] BYREF
    v5 = this;
    v2 = *(this + 54);
    if ( v2 == -1 )
    *a2 = dword_B0E9C8;
    return a2;
    else
    v4 = *ScenarioClass::Get_Waypoint_Location((char *)ScenarioClass_Instance, &v5, v2);
    *a2 = v4;
    return a2;
}

int __stdcall TeamTypeClass::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int __stdcall TeamTypeClass::_vt05(int *a1, int a2)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    AbstractTypeClass::Init((int)a1, (int)&a2);
    *a1 = (int)&TeamTypeClass::`vftable';
    a1[1] = (int)&TeamTypeClass::`vftable';
    a1[2] = (int)&TeamTypeClass::`vftable';
    a1[3] = (int)&TeamTypeClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 49);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 52);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 56);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 57);
    return 0;
    return result;
}

int __stdcall TeamTypeClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = -774134194;
    a2[1] = 298977144;
    a2[2] = 1610655148;
    a2[3] = -1252326136;
    return 0;
}

int  TeamTypeClass::_vt13(int this, int *a2)
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
    int v13; // ecx
    int v14; // eax
    int v15; // eax
    int v16; // eax
    int v17; // eax
    int v18; // eax
    int result; // eax
    int v20; // eax
    int v21; // esi
    int v22; // eax
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(*(uint32_t *)(this + 156));
    LOBYTE(v3) = *(uint8_t *)(this + 168);
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = *(uint8_t *)(this + 169);
    v5 = Power::FlagProcess(a2, v4);
    LOBYTE(v5) = *(uint8_t *)(this + 170);
    Power::FlagProcess(a2, v5);
    LOBYTE(v6) = *(uint8_t *)(this + 171);
    Power::FlagProcess(a2, v6);
    LOBYTE(v7) = *(uint8_t *)(this + 172);
    v8 = Power::FlagProcess(a2, v7);
    LOBYTE(v8) = *(uint8_t *)(this + 173);
    Power::FlagProcess(a2, v8);
    LOBYTE(v9) = *(uint8_t *)(this + 174);
    Power::FlagProcess(a2, v9);
    LOBYTE(v10) = *(uint8_t *)(this + 175);
    v11 = Power::FlagProcess(a2, v10);
    LOBYTE(v11) = *(uint8_t *)(this + 176);
    Power::FlagProcess(a2, v11);
    LOBYTE(v12) = *(uint8_t *)(this + 177);
    Power::FlagProcess(a2, v12);
    Power::TimerProcess(*(uint32_t *)(this + 180));
    Power::TimerProcess(*(uint32_t *)(this + 184));
    Power::TimerProcess(*(uint32_t *)(this + 188));
    v13 = *(uint32_t *)(this + 196);
    if ( v13 )
    v14 = (*(int (__thiscall **)(int))(*(uint32_t *)v13 + 44))(v13);
    Power::TimerProcess(v14);
    v15 = *(uint32_t *)(this + 196);
    if ( v15 )
    v16 = (*(int (__stdcall **)(int))(*(uint32_t *)(v15 + 4) + 16))(v15 + 4);
    Power::TimerProcess(v16);
    Power::TimerProcess(*(uint32_t *)(this + 204));
    v17 = *(uint32_t *)(this + 208);
    if ( v17 )
    v18 = (*(int (__stdcall **)(int))(*(uint32_t *)(v17 + 4) + 16))(v17 + 4);
    Power::TimerProcess(v18);
    Power::TimerProcess(*(uint32_t *)(this + 212));
    Power::TimerProcess(*(uint32_t *)(this + 216));
    Power::TimerProcess(*(uint32_t *)(this + 220));
    result = *(uint32_t *)(this + 224);
    if ( result )
    v20 = (*(int (__stdcall **)(int))(*(uint32_t *)(result + 4) + 16))(result + 4);
    result = Power::TimerProcess(v20);
    v21 = *(uint32_t *)(this + 228);
    if ( v21 )
    v22 = (*(int (__stdcall **)(int))(*(uint32_t *)(v21 + 4) + 16))(v21 + 4);
    return Power::TimerProcess(v22);
    return result;
}

// 0x006F1F30
int  TeamTypeClass::FlashAllInstances(void *this, int a2)
{
    int result; // eax
    int i; // esi
    uint32_t *v5; // ecx
    result = g_HouseClass_AIProductionState;
    for ( i = 0; i < g_HouseClass_AIProductionState; ++i )
    v5 = (uint32_t *)*((uint32_t *)g_TeamClassPool + i);
    if ( (void *)v5[9] == this )
    TeamTypeClass::Check(v5, a2);
    result = g_HouseClass_AIProductionState;
    return result;
}

// 0x006F1F70
int  TeamTypeClass::FindFirstInstance(void *this)
{
    int v1; // edx
    char *i; // esi
    int result; // eax
    v1 = 0;
    if ( g_HouseClass_AIProductionState <= 0 )
    return 0;
    for ( i = (char *)g_TeamClassPool; ; i += 4 )
    result = *(uint32_t *)i;
    if ( *(void **)(*(uint32_t *)i + 36) == this )
    break;
    if ( ++v1 >= g_HouseClass_AIProductionState )
    return 0;
    return result;
}

// 0x006F1FA0
int  TeamTypeClass::ProcessTaskForce(int this)
{
    int v2; // edi
    int result; // eax
    int v4; // ebp
    int v5; // eax
    v2 = 0;
    result = *(uint32_t *)(this + 228);
    *(uint8_t *)(this + 240) = 1;
    *(uint8_t *)(this + 241) = 0;
    *(uint32_t *)(this + 236) = 9;
    if ( *(int *)(result + 156) > 0 )
    v4 = 168;
    do
    v5 = *(uint32_t *)(result + v4);
    if ( *(uint8_t *)(v5 + 3278) )
    if ( *(uint32_t *)(v5 + 1504) )
    *(uint8_t *)(this + 241) = 1;
    else
    *(uint8_t *)(this + 240) = 0;
    *(uint32_t *)(this + 236) = globalHelper_0889F0(*(uint32_t *)(v5 + 1460), *(uint32_t *)(this + 236));
    result = *(uint32_t *)(this + 228);
    ++v2;
    v4 += 8;
    while ( v2 < *(uint32_t *)(result + 156) );
    if ( *(uint8_t *)(this + 246) )
    *(uint8_t *)(this + 240) = 0;
    return result;
}

int TeamTypeClass::_vt11()
{
    return 35;
}

int TeamTypeClass::_vt12()
{
    return 248;
}

int  TeamTypeClass::_vt16(uint32_t *this)
{
    return *(this + 38);
}

void ** TeamTypeClass::_vt08(void **Block, char a2)
{
    int v3; // eax
    int v4; // eax
    void **v6; // [esp+4h] [ebp-4h] BYREF
    *Block = &TeamTypeClass::`vftable';
    *(Block + 1) = &TeamTypeClass::`vftable';
    *(Block + 2) = &TeamTypeClass::`vftable';
    *(Block + 3) = &TeamTypeClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    v6 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(TeamTypeClass_Array + 16))(&TeamTypeClass_Array, &v6);
    if ( v3 != -1 && v3 < g_MultiplayerLogState && v3 < --g_MultiplayerLogState )
    do
    ++v3;
    *((uint32_t *)g_TeamTypePool + v3 - 1) = *((uint32_t *)g_TeamTypePool + v3);
    while ( v3 < g_MultiplayerLogState );
    v6 = Block;
    v4 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v6);
    if ( v4 != -1 && v4 < g_AnimManager && v4 < --g_AnimManager )
    do
    ++v4;
    *((uint32_t *)g_AnimPoolCount + v4 - 1) = *((uint32_t *)g_AnimPoolCount + v4);
    while ( v4 < g_AnimManager );
    AbstractTypeClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

