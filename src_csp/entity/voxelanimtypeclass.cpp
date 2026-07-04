#include "voxelanimtypeclass.hpp"

char __userpurge VoxelAnimTypeClass::LoadFromINI@<al>(int a1@<ecx>, double a2@<st0>, unsigned __int8 ***a3)
{
    char Bool_Overwrite; // al
    char v5; // cl
    char v6; // al
    char v7; // al
    int Int_Overwrite; // eax
    unsigned int v9; // eax
    unsigned int v10; // ecx
    double v11; // rax
    int v12; // ecx
    int v13; // eax
    int v14; // eax
    int v15; // edx
    int Index; // eax
    int v17; // eax
    int v18; // eax
    int v19; // edx
    int v20; // eax
    int v21; // eax
    int v22; // eax
    int v23; // ecx
    int v24; // eax
    int v25; // edx
    int v26; // eax
    int v27; // eax
    bool v28; // al
    uint32_t *v29; // eax
    void *v31; // edi
    uint32_t *v32; // eax
    uint32_t *File; // eax
    double v34; // [esp-8h] [ebp-2A0h]
    double v35; // [esp-8h] [ebp-2A0h]
    char v36; // [esp-4h] [ebp-29Ch]
    int v37; // [esp+10h] [ebp-288h]
    int v38; // [esp+10h] [ebp-288h]
    int v39; // [esp+10h] [ebp-288h]
    int v40; // [esp+10h] [ebp-288h]
    int v41; // [esp+10h] [ebp-288h]
    int v42; // [esp+10h] [ebp-288h]
    int v43; // [esp+10h] [ebp-288h]
    int v44; // [esp+10h] [ebp-288h]
    char v45; // [esp+15h] [ebp-283h]
    char v46; // [esp+16h] [ebp-282h]
    char v47; // [esp+17h] [ebp-281h]
    char Destination[88]; // [esp+18h] [ebp-280h] BYREF
    char v49[12]; // [esp+70h] [ebp-228h] BYREF
    int v50; // [esp+7Ch] [ebp-21Ch]
    char Buffer[512]; // [esp+98h] [ebp-200h] BYREF
    INIClass::ResetSection(a3);
    if ( !ObjectTypeClass::LoadFromINI((char *)a1, a3) )
    return 0;
    Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, g_INI_Key_Normalized, *(uint8_t *)(a1 + 660));
    v5 = *(uint8_t *)(a1 + 661);
    *(uint8_t *)(a1 + 660) = Bool_Overwrite;
    v6 = INIClass::ReadBool_Overwrite(a1 + 36, aTranslucent, v5);
    v36 = *(uint8_t *)(a1 + 768);
    *(uint8_t *)(a1 + 661) = v6;
    *(uint8_t *)(a1 + 768) = INIClass::ReadBool_Overwrite(a1 + 36, aIstiberium, v36);
    v7 = INIClass::ReadBool_Overwrite(a1 + 36, aIsmeteor, *(uint8_t *)(a1 + 720));
    v34 = *(double *)(a1 + 672);
    *(uint8_t *)(a1 + 720) = v7;
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)g_INI_Key_Elasticity, v34);
    *(double *)(a1 + 672) = a2;
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aMinangularvelo, -1.0);
    if ( a2 != 0.0 )
    a2 = a2 * 0.01745277777777778;
    *(double *)(a1 + 680) = a2;
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aMaxangularvelo, -1.0);
    if ( a2 != 0.0 )
    a2 = a2 * 0.01745277777777778;
    *(double *)(a1 + 688) = a2;
    Int_Overwrite = INIClass::ReadInt_Overwrite(a1 + 36, aDuration, *(uint32_t *)(a1 + 668));
    v35 = *(double *)(a1 + 696);
    *(uint32_t *)(a1 + 668) = Int_Overwrite;
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aMinzvel, v35);
    v9 = *(uint32_t *)(a1 + 708);
    v10 = *(uint32_t *)(a1 + 704);
    *(double *)(a1 + 696) = a2;
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aMaxzvel, COERCE_DOUBLE(__PAIR64__(v9, v10)));
    v11 = *(double *)(a1 + 712);
    *(double *)(a1 + 704) = a2;
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aMaxxyvel, v11);
    v12 = *(uint32_t *)(a1 + 724);
    *(double *)(a1 + 712) = a2;
    v37 = v12;
    if ( INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)g_INI_Key_Spawns,
    &g_INI_DefaultBuffer,
    Destination,
    128) )
    v13 = globalHelper_04BB20(Destination);
    else
    v13 = v37;
    *(uint32_t *)(a1 + 724) = v13;
    *(uint32_t *)(a1 + 728) = INIClass::ReadInt_Overwrite(a1 + 36, aSpawncount, *(uint32_t *)(a1 + 728));
    v47 = INIClass::ReadBool_Overwrite(a1 + 36, aSharebodydata, 0);
    v46 = INIClass::ReadBool_Overwrite(a1 + 36, aShareturretdat, 0);
    v45 = INIClass::ReadBool_Overwrite(a1 + 36, aSharebarreldat, 0);
    v14 = INIClass::ReadInt_Overwrite(a1 + 36, aVoxelindex, *(uint32_t *)(a1 + 664));
    v15 = *(uint32_t *)(a1 + 732);
    *(uint32_t *)(a1 + 664) = v14;
    v38 = v15;
    if ( !INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)g_INI_Key_StartSound,
    &g_INI_DefaultBuffer,
    Destination,
    128)
    || (Index = VocClass::FindIndex(Destination), Index == -1) )
    Index = v38;
    v39 = *(uint32_t *)(a1 + 736);
    *(uint32_t *)(a1 + 732) = Index;
    if ( !INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)g_INI_Key_StopSound,
    &g_INI_DefaultBuffer,
    Destination,
    128)
    || (v17 = VocClass::FindIndex(Destination), v17 == -1) )
    v17 = v39;
    *(uint32_t *)(a1 + 736) = v17;
    v40 = *(uint32_t *)(a1 + 740);
    if ( INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)aBounceanim,
    &g_INI_DefaultBuffer,
    Destination,
    128) )
    v18 = AnimTypeClass::FindOrCreate(Destination);
    else
    v18 = v40;
    v19 = *(uint32_t *)(a1 + 744);
    *(uint32_t *)(a1 + 740) = v18;
    v41 = v19;
    if ( INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)aExpireanim,
    &g_INI_DefaultBuffer,
    Destination,
    128) )
    v20 = AnimTypeClass::FindOrCreate(Destination);
    else
    v20 = v41;
    v42 = *(uint32_t *)(a1 + 748);
    *(uint32_t *)(a1 + 744) = v20;
    if ( INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)aTraileranim,
    &g_INI_DefaultBuffer,
    Destination,
    128) )
    v21 = AnimTypeClass::FindOrCreate(Destination);
    else
    v21 = v42;
    *(uint32_t *)(a1 + 748) = v21;
    v22 = INIClass::ReadInt_Overwrite(a1 + 36, g_INI_Key_Damage, *(uint32_t *)(a1 + 752));
    v23 = *(uint32_t *)(a1 + 756);
    *(uint32_t *)(a1 + 752) = v22;
    v24 = INIClass::ReadInt_Overwrite(a1 + 36, aDamageradius, v23);
    v25 = *(uint32_t *)(a1 + 760);
    *(uint32_t *)(a1 + 756) = v24;
    v43 = v25;
    if ( INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)g_INI_Key_Warhead,
    &g_INI_DefaultBuffer,
    Destination,
    128) )
    v26 = WarheadTypeClass::FindOrCreate(Destination);
    else
    v26 = v43;
    v44 = *(uint32_t *)(a1 + 764);
    *(uint32_t *)(a1 + 760) = v26;
    if ( INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)aAttachedsystem,
    &g_INI_DefaultBuffer,
    Destination,
    128) )
    v27 = BuildingTypeClass::LoadOrGet(Destination);
    else
    v27 = v44;
    *(uint32_t *)(a1 + 764) = v27;
    v28 = v47 || v45 || v46;
    *(uint8_t *)(a1 + 662) = v28;
    if ( v28 )
    v29 = (uint32_t *)INIEntry::GetTechnoType(a1 + 36, aSharesource);
    if ( !v29 )
    *(uint32_t *)(a1 + 176) = 0;
    *(uint32_t *)(a1 + 180) = 0;
    return 1;
    if ( v47 )
    *(uint32_t *)(a1 + 176) = v29[44];
    *(uint32_t *)(a1 + 180) = v29[45];
    return 1;
    if ( v46 )
    *(uint32_t *)(a1 + 176) = v29[46];
    *(uint32_t *)(a1 + 180) = v29[47];
    return 1;
    if ( v45 )
    *(uint32_t *)(a1 + 176) = v29[48];
    *(uint32_t *)(a1 + 180) = v29[49];
    return 1;
    else
    _makepath(Buffer, 0, 0, (const char *)(a1 + 504), g_Str_File__VXL);
    CCFileClass::Construct(Destination, Buffer);
    v31 = *(void **)(a1 + 176);
    if ( v31 )
    WaveClass::Destroy(*(uint32_t *)(a1 + 176));
    __3_YAXPAX_Z(v31);
    v32 = __2_YAPAXI_Z(0x1Cu);
    if ( v32 )
    File = File::LoadFileVXL(v32, (int)Destination, 0);
    else
    File = 0;
    *(uint32_t *)(a1 + 176) = File;
    *(uint32_t *)Destination = &CCFileClass::`vftable';
    v50 = 0;
    Vector::Clear((int)v49);
    *(uint32_t *)Destination = &off_7E1668;
    BufferIOFileClass::Dtor(Destination);
    return 1;
}

int  VoxelAnimTypeClass::_vt13(int this, int *a2)
{
    int v3; // eax
    int v4; // ecx
    int v5; // edx
    int v6; // edx
    int v7; // edx
    v3 = AbstractTypeClass::ProcessPower((char *)this, a2);
    LOBYTE(v3) = *(uint8_t *)(this + 660);
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = *(uint8_t *)(this + 661);
    Power::FlagProcess(a2, v4);
    LOBYTE(v5) = *(uint8_t *)(this + 662);
    Power::FlagProcess(a2, v5);
    Power::TimerProcess(*(uint32_t *)(this + 664));
    Power::TimerProcess(*(uint32_t *)(this + 668));
    Checksummer::Add_double((unsigned int *)a2, *(uint32_t *)(this + 672), *(uint32_t *)(this + 676));
    Checksummer::Add_double((unsigned int *)a2, *(uint32_t *)(this + 680), *(uint32_t *)(this + 684));
    Checksummer::Add_double((unsigned int *)a2, *(uint32_t *)(this + 688), *(uint32_t *)(this + 692));
    Checksummer::Add_double((unsigned int *)a2, *(uint32_t *)(this + 696), *(uint32_t *)(this + 700));
    Checksummer::Add_double((unsigned int *)a2, *(uint32_t *)(this + 704), *(uint32_t *)(this + 708));
    Checksummer::Add_double((unsigned int *)a2, *(uint32_t *)(this + 712), *(uint32_t *)(this + 716));
    LOBYTE(v6) = *(uint8_t *)(this + 720);
    Power::FlagProcess(a2, v6);
    Power::TimerProcess(*(uint32_t *)(this + 728));
    Power::TimerProcess(*(uint32_t *)(this + 732));
    Power::TimerProcess(*(uint32_t *)(this + 736));
    Power::TimerProcess(*(uint32_t *)(this + 752));
    Power::TimerProcess(*(uint32_t *)(this + 756));
    LOBYTE(v7) = *(uint8_t *)(this + 768);
    return Power::FlagProcess(a2, v7);
}

int __stdcall VoxelAnimTypeClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 784035174;
    a2[1] = 298978637;
    a2[2] = 1610642049;
    a2[3] = -1252326136;
    return 0;
}

// 0x0074B810
int __stdcall VoxelAnimTypeClass::SaveLoad_Prefix(uint32_t *a1, int a2)
{
    int result; // eax
    result = ObjectTypeClass::LoadCleanup((int)a1, a2);
    if ( result >= 0 )
    if ( a1 )
    ObjectTypeClass::Construct(a1, (int)&a2);
    *a1 = &VoxelAnimTypeClass::`vftable';
    a1[1] = &VoxelAnimTypeClass::`vftable';
    a1[2] = &VoxelAnimTypeClass::`vftable';
    a1[3] = &VoxelAnimTypeClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 190);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 185);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 186);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 187);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 181);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 191);
    VoxelAnimType::LoadAnim((char *)a1);
    return 0;
    return result;
}

// 0x0074B8D0
int __stdcall VoxelAnimTypeClass::SaveLoad_Prefix_0(int a1, int a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_PrefixWrapper(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int VoxelAnimTypeClass::_vt11()
{
    return 42;
}

int VoxelAnimTypeClass::_vt12()
{
    return 776;
}

char __stdcall VoxelAnimTypeClass::_vt32(int a1, int a2)
{
    return 0;
}

int __stdcall VoxelAnimTypeClass::_vt35(int a1)
{
    return 0;
}

void ** VoxelAnimTypeClass::_vt08(void **Block, char a2)
{
    int v3; // eax
    int v4; // eax
    void **v6; // [esp+4h] [ebp-4h] BYREF
    *Block = &VoxelAnimTypeClass::`vftable';
    *(Block + 1) = &VoxelAnimTypeClass::`vftable';
    *(Block + 2) = &VoxelAnimTypeClass::`vftable';
    *(Block + 3) = &VoxelAnimTypeClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    v6 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v6);
    if ( v3 != -1 && v3 < g_AnimManager && v3 < --g_AnimManager )
    do
    ++v3;
    *((uint32_t *)g_AnimPoolCount + v3 - 1) = *((uint32_t *)g_AnimPoolCount + v3);
    while ( v3 < g_AnimManager );
    v6 = Block;
    v4 = (*(int (__thiscall **)(int *, void ***))(VoxelAnimTypeClass_Array + 16))(&VoxelAnimTypeClass_Array, &v6);
    if ( v4 != -1 && v4 < g_MultiplayerPool && v4 < --g_MultiplayerPool )
    do
    ++v4;
    *((uint32_t *)dword_A8EB2C + v4 - 1) = *((uint32_t *)dword_A8EB2C + v4);
    while ( v4 < g_MultiplayerPool );
    if ( *((uint8_t *)Block + 662) )
    *(Block + 44) = 0;
    *(Block + 45) = 0;
    ObjectTypeClass::Destruct((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

