#include "superweapontypeclass.hpp"

int  SuperWeaponTypeClass::SuperWeaponTypeClass(int this, char *Source)
{
    int v3; // eax
    AbstractTypeClass::Constructor(this, Source);
    *(uint32_t *)(this + 156) = 0;
    *(uint32_t *)(this + 160) = -1;
    *(uint32_t *)(this + 164) = -1;
    *(uint32_t *)(this + 168) = -1;
    *(uint32_t *)(this + 172) = -1;
    *(uint32_t *)(this + 176) = 4500;
    *(uint32_t *)(this + 180) = -1;
    *(uint32_t *)(this + 184) = 0;
    *(uint32_t *)(this + 188) = 0;
    *(uint32_t *)(this + 192) = -1;
    *(uint32_t *)(this + 196) = -1;
    *(uint32_t *)(this + 200) = 0;
    *(uint8_t *)(this + 204) = 0;
    *(uint32_t *)(this + 232) = -1;
    *(uint32_t *)(this + 240) = -1;
    *(uint8_t *)(this + 229) = 0;
    *(uint8_t *)(this + 230) = 1;
    *(uint8_t *)(this + 231) = 0;
    *(uint8_t *)(this + 236) = 0;
    *(uint8_t *)(this + 237) = 0;
    *(uint8_t *)(this + 238) = 0;
    *(uint8_t *)(this + 244) = 0;
    *(uint8_t *)(this + 245) = 0;
    *(uint32_t *)(this + 248) = 0;
    *(uint32_t *)(this + 252) = 0;
    *(uint32_t *)this = &SuperWeaponTypeClass::`vftable';
    *(uint32_t *)(this + 4) = &SuperWeaponTypeClass::`vftable';
    *(uint32_t *)(this + 8) = &SuperWeaponTypeClass::`vftable';
    *(uint32_t *)(this + 12) = &SuperWeaponTypeClass::`vftable';
    AbstractClass::GenerateUniqueID(this + 4);
    *(uint32_t *)(this + 152) = g_HouseClassInitState;
    if ( g_HouseClassInitState < dword_A8E338
    || (byte_A8E33D || !dword_A8E338)
    && dword_A8E344 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_A8E330 + 8))(
    &dword_A8E330,
    dword_A8E338 + dword_A8E344,
    0) )
    v3 = g_HouseClassInitState++;
    *((uint32_t *)g_SuperWeaponPool + v3) = this;
    if ( this + 36 != this + 204 )
    qmemcpy((void *)(this + 204), (const void *)(this + 36), 0x19u);
    return this;
}

// 0x006CE7C0
int __stdcall SuperWeaponTypeClass::SD_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 217234663;
    a2[1] = 298989284;
    a2[2] = 1610668216;
    a2[3] = -318126072;
    return 0;
}

// 0x006CE800
int __stdcall SuperWeaponTypeClass::SaveLoad_Prefix(int a1, int a2)
{
    int result; // eax
    int v3; // eax
    char v4; // [esp+7h] [ebp-201h] BYREF
    char Buffer[512]; // [esp+8h] [ebp-200h] BYREF
    result = AbstractClass::SaveLoad_Prefix_0((uint32_t *)a1, a2);
    if ( result >= 0 )
    if ( a1 )
    AbstractTypeClass::Init(a1, (int)&v4);
    *(uint32_t *)(a1 + 184) = 0;
    *(uint32_t *)a1 = &SuperWeaponTypeClass::`vftable';
    *(uint32_t *)(a1 + 4) = &SuperWeaponTypeClass::`vftable';
    *(uint32_t *)(a1 + 8) = &SuperWeaponTypeClass::`vftable';
    *(uint32_t *)(a1 + 12) = &SuperWeaponTypeClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 156));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 200));
    _makepath(Buffer, 0, 0, (const char *)(a1 + 204), Ext);
    v3 = SearchMIXFile(Buffer, 0);
    *(uint32_t *)(a1 + 184) = v3;
    if ( !v3 )
    *(uint32_t *)(a1 + 184) = SearchMIXFile(g_Str_File_XXICON_SHP, 0);
    return 0;
    return result;
}

int __stdcall SuperWeaponTypeClass::SaveLoad_Prefix_0(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

// 0x006CE8F0
int SuperWeaponTypeClass::SD_vt11()
{
    return 32;
}

// 0x006CE900
int SuperWeaponTypeClass::SD_vt12()
{
    return 256;
}

// 0x006CE910
int  SuperWeaponTypeClass::SD_vt13(int this, int *a2)
{
    int v3; // eax
    int v4; // ecx
    int v5; // edx
    int v6; // eax
    int v7; // edx
    int v8; // edx
    int v9; // eax
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(*(uint32_t *)(this + 152));
    Power::TimerProcess(*(uint32_t *)(this + 188));
    Power::TimerProcess(*(uint32_t *)(this + 160));
    Power::TimerProcess(*(uint32_t *)(this + 164));
    Power::TimerProcess(*(uint32_t *)(this + 168));
    v3 = Power::TimerProcess(*(uint32_t *)(this + 172));
    LOBYTE(v3) = *(uint8_t *)(this + 230);
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = *(uint8_t *)(this + 231);
    Power::FlagProcess(a2, v4);
    LOBYTE(v5) = *(uint8_t *)(this + 237);
    v6 = Power::FlagProcess(a2, v5);
    LOBYTE(v6) = *(uint8_t *)(this + 238);
    Power::FlagProcess(a2, v6);
    Power::TimerProcess(*(uint32_t *)(this + 240));
    LOBYTE(v7) = *(uint8_t *)(this + 244);
    Power::FlagProcess(a2, v7);
    Power::TimerProcess(*(uint32_t *)(this + 176));
    Power::TimerProcess(*(uint32_t *)(this + 180));
    LOBYTE(v8) = *(uint8_t *)(this + 229);
    v9 = Power::FlagProcess(a2, v8);
    LOBYTE(v9) = *(uint8_t *)(this + 245);
    return Power::FlagProcess(a2, v9);
}

// 0x006CEA10
int  SuperWeaponTypeClass::SD_vt16(uint32_t *this)
{
    return *(this + 38);
}

char  SuperWeaponTypeClass::SD_vt25(int this, unsigned __int8 ***a2)
{
    int v3; // edi
    int v4; // eax
    int v5; // ecx
    int v6; // eax
    char Bool_Overwrite; // al
    int v8; // ecx
    int Int_Overwrite; // eax
    char v10; // al
    char v11; // cl
    char v12; // al
    char v13; // al
    int v14; // edi
    int Index; // eax
    int v16; // edi
    int v17; // eax
    double v18; // st7
    double Double_Overwrite; // st7
    int v20; // edx
    const void **v21; // edi
    const void **v22; // edi
    int v23; // edi
    int v24; // eax
    char v25; // cl
    char v26; // al
    double v27; // st7
    char *v28; // edi
    int v29; // eax
    char v31; // [esp+4h] [ebp-404h]
    char v32; // [esp+4h] [ebp-404h]
    char v33; // [esp+4h] [ebp-404h]
    char v34; // [esp+4h] [ebp-404h]
    int v35; // [esp+18h] [ebp-3F0h]
    int v36; // [esp+18h] [ebp-3F0h]
    char Destination[24]; // [esp+1Ch] [ebp-3ECh] BYREF
    char v38; // [esp+34h] [ebp-3D4h]
    char v39[40]; // [esp+38h] [ebp-3D0h] BYREF
    char v40[40]; // [esp+60h] [ebp-3A8h] BYREF
    char v41[128]; // [esp+88h] [ebp-380h] BYREF
    char Source[256]; // [esp+108h] [ebp-300h] BYREF
    char Buffer[512]; // [esp+208h] [ebp-200h] BYREF
    INIClass::ResetSection(a2);
    if ( !AbstractTypeClass::LoadFromINI(this, a2) )
    return 0;
    v3 = *(uint32_t *)(this + 156);
    if ( INIClass::GetString(
    a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aWeapontype,
    &g_INI_DefaultBuffer,
    v41,
    128) )
    v4 = InfantryTypeClass::Find(v41);
    else
    v4 = v3;
    v5 = *(uint32_t *)(this + 188);
    *(uint32_t *)(this + 156) = v4;
    v6 = SuperWeaponTypeClass::loadSWProperties(
    a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)g_INI_Key_Action,
    v5);
    v31 = *(uint8_t *)(this + 230);
    *(uint32_t *)(this + 188) = v6;
    *(uint8_t *)(this + 230) = INIClass::ReadBool_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aIspowered,
    v31);
    Bool_Overwrite = INIClass::ReadBool_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aDisableablefro,
    *(uint8_t *)(this + 231));
    v8 = *(uint32_t *)(this + 232);
    *(uint8_t *)(this + 231) = Bool_Overwrite;
    Int_Overwrite = INIClass::ReadInt_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aFlashsidebarta,
    v8);
    v32 = *(uint8_t *)(this + 236);
    *(uint32_t *)(this + 232) = Int_Overwrite;
    *(uint8_t *)(this + 236) = INIClass::ReadBool_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aAidefendagains,
    v32);
    v10 = INIClass::ReadBool_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aPreclick,
    *(uint8_t *)(this + 237));
    v11 = *(uint8_t *)(this + 238);
    *(uint8_t *)(this + 237) = v10;
    v12 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aPostclick, v11);
    v33 = *(uint8_t *)(this + 244);
    *(uint8_t *)(this + 238) = v12;
    v13 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aShowtimer, v33);
    v14 = *(uint32_t *)(this + 192);
    *(uint8_t *)(this + 244) = v13;
    if ( !INIClass::GetString(
    a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aSpecialsound,
    &g_INI_DefaultBuffer,
    v41,
    128)
    || (Index = VocClass::FindIndex(v41), Index == -1) )
    Index = v14;
    v16 = *(uint32_t *)(this + 196);
    *(uint32_t *)(this + 192) = Index;
    if ( !INIClass::GetString(
    a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)g_INI_Key_StartSound,
    &g_INI_DefaultBuffer,
    v41,
    128)
    || (v17 = VocClass::FindIndex(v41), v17 == -1) )
    v17 = v16;
    v18 = *(float *)(this + 248);
    *(uint32_t *)(this + 196) = v17;
    Double_Overwrite = INIClass::ReadDouble_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)g_INI_Key_Range,
    v18);
    v20 = *(uint32_t *)(this + 252);
    *(float *)(this + 248) = Double_Overwrite;
    *(uint32_t *)(this + 252) = INIClass::ReadInt_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aLinemultiplier,
    v20);
    INIClass::GetString(
    a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)g_INI_Key_Type,
    &g_INI_DefaultBuffer,
    v40,
    40);
    if ( strlen(v40) )
    v35 = 0;
    v21 = (const void **)off_8425C0;
    while ( _strcmpi(*v21, v40) )
    ++v21;
    ++v35;
    if ( (int)v21 >= (int)g_INI_Key_MultiMissile )
    goto LABEL_18;
    if ( v35 != -1 )
    *(uint32_t *)(this + 180) = v35;
    LABEL_18:
    INIClass::GetString(
    a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aPredependent,
    &g_INI_DefaultBuffer,
    v39,
    40);
    if ( strlen(v39) )
    v36 = 0;
    v22 = (const void **)off_8425C0;
    while ( _strcmpi(*v22, v39) )
    ++v22;
    ++v36;
    if ( (int)v22 >= (int)g_INI_Key_MultiMissile )
    goto LABEL_25;
    if ( v36 != -1 )
    *(uint32_t *)(this + 240) = v36;
    LABEL_25:
    v23 = *(uint32_t *)(this + 200);
    if ( INIClass::GetString(
    a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aAuxbuilding,
    &g_INI_DefaultBuffer,
    v41,
    128) )
    v24 = BuildingTypeClass::FindOrCreate(v41);
    else
    v24 = v23;
    v25 = *(uint8_t *)(this + 229);
    *(uint32_t *)(this + 200) = v24;
    v26 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aUsechargedrain, v25);
    v34 = *(uint8_t *)(this + 245);
    *(uint8_t *)(this + 229) = v26;
    *(uint8_t *)(this + 245) = INIClass::ReadBool_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aManualcontrol,
    v34);
    v27 = INIClass::ReadDouble_Overwrite((int)a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aRechargetime, 0.0);
    if ( v27 != 0.0 )
    *(uint32_t *)(this + 176) = Math::RoundToInt(v27 * 900.0);
    v28 = (char *)(this + 204);
    INIClass::GetString(
    a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aSidebarimage,
    (char *)(this + 204),
    Source,
    256);
    if ( Source )
    strncpy(Destination, Source, 0x18u);
    v38 = 0;
    else
    Destination[0] = (unsigned __int8)Source;
    if ( Destination != v28 )
    qmemcpy(v28, Destination, 0x18u);
    *(uint8_t *)(this + 228) = v38;
    _makepath(Buffer, 0, 0, (const char *)(this + 204), Ext);
    v29 = SearchMIXFile(Buffer, 0);
    *(uint32_t *)(this + 184) = v29;
    if ( !v29 )
    *(uint32_t *)(this + 184) = SearchMIXFile(g_Str_File_XXICON_SHP, 0);
    return 1;
}

// 0x006CEEB0
int  SuperWeaponTypeClass::FindFirstOfAction(void *this)
{
    int v1; // eax
    char *i; // edx
    v1 = 0;
    if ( g_HouseClassInitState <= 0 )
    return 0;
    for ( i = (char *)g_SuperWeaponPool; *(void **)(*(uint32_t *)i + 188) != this; i += 4 )
    if ( ++v1 >= g_HouseClassInitState )
    return 0;
    return *((uint32_t *)g_SuperWeaponPool + v1);
}

// 0x006CEF80
int  SuperWeaponTypeClass::SD_vt27(uint32_t *this, int a2, int a3)
{
    int v4; // eax
    if ( *(this + 45) != 10 )
    return *(this + 47);
    if ( a3
    && (*(int (__thiscall **)(int))(*(uint32_t *)a3 + 44))(a3) == 6
    && (v4 = (*(int (__thiscall **)(int))(*(uint32_t *)a3 + 44))(a3),
    (unsigned __int8)House::IsAlliedWith(*(void*375 **)(v4 == 6 ? a3 + 0x21C : 540), HouseClass_Player)) )
    return *(this + 47);
    else
    return 70;
}

uint32_t * SuperWeaponTypeClass::SDDTOR(uint32_t *Block, char a2)
{
    int v3; // eax
    uint32_t *v5; // [esp+4h] [ebp-4h] BYREF
    *Block = &SuperWeaponTypeClass::`vftable';
    *(Block + 1) = &SuperWeaponTypeClass::`vftable';
    *(Block + 2) = &SuperWeaponTypeClass::`vftable';
    *(Block + 3) = &SuperWeaponTypeClass::`vftable';
    v5 = Block;
    v3 = (*(int (__thiscall **)(int *, uint32_t **))(dword_A8E330 + 16))(&dword_A8E330, &v5);
    if ( v3 != -1 && v3 < g_HouseClassInitState && v3 < --g_HouseClassInitState )
    do
    ++v3;
    *((uint32_t *)g_SuperWeaponPool + v3 - 1) = *((uint32_t *)g_SuperWeaponPool + v3);
    while ( v3 < g_HouseClassInitState );
    AbstractTypeClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

