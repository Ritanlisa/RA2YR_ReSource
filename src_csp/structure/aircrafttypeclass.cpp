#include "aircrafttypeclass.hpp"

int  AircraftTypeClass::AircraftTypeClass(int this, char *Source)
{
    int v3; // eax
    bool v4; // zf
    int v5; // ecx
    uint32_t *v6; // edx
    TechnoTypeClass::ReadINI((char *)this, Source, 4);
    *(uint32_t *)(this + 3576) = -1;
    *(uint8_t *)(this + 3580) = 0;
    *(uint8_t *)(this + 3592) = 0;
    *(uint8_t *)(this + 3593) = 0;
    *(uint8_t *)(this + 3594) = 0;
    *(uint8_t *)(this + 3595) = 0;
    *(uint8_t *)(this + 3596) = 0;
    *(uint8_t *)(this + 3597) = 0;
    *(uint8_t *)(this + 3598) = 0;
    *(uint32_t *)this = &AircraftTypeClass::`vftable';
    *(uint32_t *)(this + 4) = &AircraftTypeClass::`vftable';
    *(uint32_t *)(this + 8) = &AircraftTypeClass::`vftable';
    *(uint32_t *)(this + 12) = &AircraftTypeClass::`vftable';
    AbstractClass::GenerateUniqueID(this + 4);
    v3 = g_TypeClass_FindCache;
    if ( g_TypeClass_FindCache < dword_A8B220
    || (byte_A8B225 || !dword_A8B220)
    && dword_A8B22C > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(AircraftTypeClass_Array + 8))(
    &AircraftTypeClass_Array,
    dword_A8B220 + dword_A8B22C,
    0) == 0,
    v3 = g_TypeClass_FindCache,
    !v4) )
    g_TypeClass_FindCache = v3 + 1;
    *((uint32_t *)g_AircraftTypeCount + v3) = this;
    v3 = g_TypeClass_FindCache;
    v5 = 0;
    if ( v3 <= 0 )
    LABEL_11:
    v5 = -1;
    else
    v6 = g_AircraftTypeCount;
    while ( *v6 != this )
    ++v5;
    ++v6;
    if ( v5 >= v3 )
    goto LABEL_11;
    *(uint32_t *)(this + 3576) = v5;
    *(uint8_t *)(this + 3384) = 1;
    *(uint8_t *)(this + 3478) = 1;
    *(uint8_t *)(this + 3213) = 0;
    *(uint32_t *)(this + 1816) = 32;
    *(uint32_t *)(this + 3584) = 0;
    *(uint32_t *)(this + 3588) = 3;
    *(uint8_t *)(this + 3381) = 0;
    *(uint8_t *)(this + 3382) = 0;
    *(uint8_t *)(this + 3387) = 0;
    *(uint8_t *)(this + 3479) = 0;
    *(uint8_t *)(this + 3374) = 0;
    return this;
}

int  AircraftTypeClass::_vt35(void *this, IUnknown *ppv)
{
    void *v3; // eax
    v3 = __2_YAPAXI_Z(0x6D8u);
    if ( v3 )
    return AircraftClass::Construct((int)v3, (int)this, ppv);
    else
    return 0;
}

char AircraftTypeClass::_vt41()
{
    return 0;
}

int *__stdcall AircraftTypeClass::_vt36(int a1)
{
    if ( (byte_889F38 & 1) == 0 )
    byte_889F38 |= 1u;
    dword_889F20 = 0;
    dword_889F24 = 2147450879;
    atexit(nullsub_85);
    return &dword_889F20;
}

char __stdcall AircraftTypeClass::_vt32(int a1, int a2)
{
    return 0;
}

char __userpurge AircraftTypeClass::vt_25_@<al>(int a1@<ecx>, double a2@<st0>, unsigned __int8 ***a3)
{
    char Bool_Overwrite; // al
    char v5; // cl
    char v6; // al
    char v7; // al
    char v8; // al
    int v9; // eax
    char v10; // al
    char v11; // cl
    char v13; // [esp-Ch] [ebp-98h]
    char v14; // [esp-Ch] [ebp-98h]
    char v15; // [esp-Ch] [ebp-98h]
    int v16; // [esp-Ch] [ebp-98h]
    int v17; // [esp+8h] [ebp-84h]
    char Destination[128]; // [esp+Ch] [ebp-80h] BYREF
    INIClass::ResetSection(a3);
    if ( !ObjectTypeClass::LoadExtras(a1, a2, a3) )
    return 0;
    Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, aLandable, *(uint8_t *)(a1 + 3594));
    v5 = *(uint8_t *)(a1 + 3597);
    *(uint8_t *)(a1 + 3594) = Bool_Overwrite;
    v6 = INIClass::ReadBool_Overwrite(a1 + 36, aAirportbound, v5);
    v13 = *(uint8_t *)(a1 + 3598);
    *(uint8_t *)(a1 + 3597) = v6;
    *(uint8_t *)(a1 + 3598) = INIClass::ReadBool_Overwrite(a1 + 36, aFighter, v13);
    v7 = INIClass::ReadBool_Overwrite(a1 + 36, aCarryall, *(uint8_t *)(a1 + 3580));
    v14 = *(uint8_t *)(a1 + 3592);
    *(uint8_t *)(a1 + 3580) = v7;
    v8 = INIClass::ReadBool_Overwrite(a1 + 504, aRotors, v14);
    v15 = *(uint8_t *)(a1 + 3593);
    *(uint8_t *)(a1 + 3592) = v8;
    *(uint8_t *)(a1 + 3593) = INIClass::ReadBool_Overwrite(a1 + 504, aCustomrotor, v15);
    v17 = *(uint32_t *)(a1 + 3584);
    if ( INIClass::GetString(
    (unsigned __int8 ***)&CCINIClass_INI_Art,
    (unsigned __int8 *)(a1 + 504),
    (unsigned __int8 *)aTrailer,
    &g_INI_DefaultBuffer,
    Destination,
    128) )
    v9 = AnimTypeClass::FindOrCreate(Destination);
    else
    v9 = v17;
    v16 = *(uint32_t *)(a1 + 3588);
    *(uint32_t *)(a1 + 3584) = v9;
    *(uint32_t *)(a1 + 3588) = INIClass::ReadInt_Overwrite(a1 + 504, aSpawndelay, v16);
    v10 = INIClass::ReadBool_Overwrite(a1 + 36, aFlyby, *(uint8_t *)(a1 + 3595));
    v11 = *(uint8_t *)(a1 + 3596);
    *(uint8_t *)(a1 + 3595) = v10;
    *(uint8_t *)(a1 + 3596) = INIClass::ReadBool_Overwrite(a1 + 36, aFlyback, v11);
    return 1;
}

int  AircraftTypeClass::_vt13(int this, int *a2)
{
    int v3; // eax
    int v4; // ecx
    int v5; // edx
    int v6; // eax
    int v7; // ecx
    v3 = BuildingTypeClass::ProcessPower(this, a2);
    LOBYTE(v3) = *(uint8_t *)(this + 3592);
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = *(uint8_t *)(this + 3593);
    Power::FlagProcess(a2, v4);
    LOBYTE(v5) = *(uint8_t *)(this + 3594);
    v6 = Power::FlagProcess(a2, v5);
    LOBYTE(v6) = *(uint8_t *)(this + 3597);
    Power::FlagProcess(a2, v6);
    LOBYTE(v7) = *(uint8_t *)(this + 3598);
    Power::FlagProcess(a2, v7);
    return Power::TimerProcess(*(uint32_t *)(this + 3576));
}

int __stdcall AircraftTypeClass::_vt05(int a1, int a2)
{
    int result; // eax
    result = TechnoTypeClass::SaveLoad_Prefix(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    TechnoTypeClass::Construct(a1, (int)&a2);
    *(uint32_t *)a1 = &AircraftTypeClass::`vftable';
    *(uint32_t *)(a1 + 4) = &AircraftTypeClass::`vftable';
    *(uint32_t *)(a1 + 8) = &AircraftTypeClass::`vftable';
    *(uint32_t *)(a1 + 12) = &AircraftTypeClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 3584));
    VoxelAnimType::LoadAnim((char *)a1);
    ObjectTypeClass::Load2DArt((char *)a1);
    return 0;
    return result;
}

int __stdcall AircraftTypeClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = -1366608935;
    a2[1] = 298976796;
    a2[2] = 1610654892;
    a2[3] = -1252326136;
    return 0;
}

int AircraftTypeClass::_vt11()
{
    return 3;
}

int AircraftTypeClass::_vt12()
{
    return 3600;
}

int  AircraftTypeClass::_vt16(uint32_t *this)
{
    return *(this + 894);
}

void ** AircraftTypeClass::_vt08(void **Block, char a2)
{
    int v3; // eax
    void **v5; // [esp+4h] [ebp-4h] BYREF
    *Block = &AircraftTypeClass::`vftable';
    *(Block + 1) = &AircraftTypeClass::`vftable';
    *(Block + 2) = &AircraftTypeClass::`vftable';
    *(Block + 3) = &AircraftTypeClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    v5 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(AircraftTypeClass_Array + 16))(&AircraftTypeClass_Array, &v5);
    if ( v3 != -1 && v3 < g_TypeClass_FindCache && v3 < --g_TypeClass_FindCache )
    do
    ++v3;
    *((uint32_t *)g_AircraftTypeCount + v3 - 1) = *((uint32_t *)g_AircraftTypeCount + v3);
    while ( v3 < g_TypeClass_FindCache );
    TechnoTypeClass::DTOR((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int AircraftTypeClass::_vt45()
{
    return RulesClass_Instance[1].DominatorCaptureRange;
}

