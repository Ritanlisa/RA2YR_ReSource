#include "particlesystemtypeclass.hpp"

char  ParticleSystemTypeClass::_vt25(int this, unsigned __int8 ***a2)
{
    int v3; // eax
    char v4; // cl
    char Bool_Overwrite; // al
    int Int_Overwrite; // eax
    int v7; // ecx
    int v8; // eax
    double v9; // st7
    double Double_Overwrite; // st7
    int v11; // edx
    bool v12; // zf
    int v13; // eax
    float *v14; // eax
    double v15; // st7
    double v16; // rax
    double v17; // st7
    unsigned int v18; // ecx
    unsigned int v19; // edx
    double v20; // st7
    unsigned int v21; // eax
    unsigned int v22; // ecx
    double v23; // st7
    double v24; // rax
    double v25; // st7
    unsigned int v26; // ecx
    unsigned int v27; // edx
    double v28; // st7
    char v29; // al
    int Coord; // eax
    int v31; // ecx
    int v32; // eax
    char v33; // al
    double v35; // [esp+0h] [ebp-68h]
    double v36; // [esp+0h] [ebp-68h]
    int v37; // [esp+4h] [ebp-64h]
    int v38; // [esp+4h] [ebp-64h]
    const void **v39; // [esp+14h] [ebp-54h] BYREF
    int v40; // [esp+18h] [ebp-50h]
    float v41[3]; // [esp+1Ch] [ebp-4Ch] BYREF
    char Destination[64]; // [esp+28h] [ebp-40h] BYREF
    INIClass::ResetSection(a2);
    if ( !ObjectTypeClass::LoadFromINI((char *)this, a2) )
    return 0;
    INIClass::GetString(
    a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aHoldswhat,
    &g_INI_DefaultBuffer,
    Destination,
    64);
    v3 = BuildingTypeClass::FindOrCreateEx(Destination);
    v4 = *(uint8_t *)(this + 664);
    *(uint32_t *)(this + 660) = v3;
    Bool_Overwrite = INIClass::ReadBool_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)g_INI_Key_Spawns,
    v4);
    v37 = *(uint32_t *)(this + 668);
    *(uint8_t *)(this + 664) = Bool_Overwrite;
    *(uint32_t *)(this + 668) = INIClass::ReadInt_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aSpawnframes,
    v37);
    Int_Overwrite = INIClass::ReadInt_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aParticlecap,
    *(uint32_t *)(this + 676));
    v7 = *(uint32_t *)(this + 680);
    *(uint32_t *)(this + 676) = Int_Overwrite;
    v8 = INIClass::ReadInt_Overwrite((int)a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aSpawnradius, v7);
    v9 = *(float *)(this + 672);
    *(uint32_t *)(this + 680) = v8;
    *(float *)(this + 672) = INIClass::ReadDouble_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aSlowdown,
    v9);
    *(float *)(this + 684) = INIClass::ReadDouble_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aSpawncutoff,
    *(float *)(this + 684));
    Double_Overwrite = INIClass::ReadDouble_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aSpawntransluce,
    *(float *)(this + 688));
    v11 = *(uint32_t *)(this + 696);
    *(float *)(this + 688) = Double_Overwrite;
    *(uint32_t *)(this + 696) = INIClass::ReadInt_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aLifetime,
    v11);
    INIClass::GetString(
    a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aBehaveslike,
    &g_INI_DefaultBuffer,
    Destination,
    64);
    v40 = 0;
    v39 = (const void **)off_836EE0;
    while ( 1 )
    v12 = _strcmpi(Destination, *v39) == 0;
    v13 = v40;
    if ( v12 )
    break;
    ++v40;
    if ( (int)++v39 >= (int)g_INI_Key_Railgun )
    v13 = -1;
    break;
    *(uint32_t *)(this + 692) = v13;
    v14 = ParticleSystemTypeClass::ReadXYZFromINI(
    a2,
    v41,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aSpawndirection,
    (float *)(this + 700));
    *(float *)(this + 700) = *v14;
    *(float *)(this + 704) = v14[1];
    v35 = *(double *)(this + 712);
    *(float *)(this + 708) = v14[2];
    v15 = INIClass::ReadDouble_Overwrite((int)a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aParticlesperco, v35);
    v16 = *(double *)(this + 720);
    *(double *)(this + 712) = v15;
    v17 = INIClass::ReadDouble_Overwrite((int)a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aSpiraldeltaper, v16);
    v18 = *(uint32_t *)(this + 732);
    v19 = *(uint32_t *)(this + 728);
    *(double *)(this + 720) = v17;
    v20 = INIClass::ReadDouble_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aSpiralradius,
    COERCE_DOUBLE(__PAIR64__(v18, v19)));
    v21 = *(uint32_t *)(this + 740);
    v22 = *(uint32_t *)(this + 736);
    *(double *)(this + 728) = v20;
    v23 = INIClass::ReadDouble_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aPositionpertur,
    COERCE_DOUBLE(__PAIR64__(v21, v22)));
    v24 = *(double *)(this + 744);
    *(double *)(this + 736) = v23;
    v25 = INIClass::ReadDouble_Overwrite((int)a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aMovementpertur, v24);
    v26 = *(uint32_t *)(this + 756);
    v27 = *(uint32_t *)(this + 752);
    *(double *)(this + 744) = v25;
    v28 = INIClass::ReadDouble_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aVelocitypertur,
    COERCE_DOUBLE(__PAIR64__(v26, v27)));
    v29 = *(uint8_t *)(this + 779);
    *(double *)(this + 752) = v28;
    *(uint8_t *)(this + 779) = INIClass::ReadBool_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aLaser,
    v29);
    Coord = INIClass::GetCoord(
    a2,
    (int)&v39,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aLasercolor,
    (unsigned __int8 *)(this + 776));
    v31 = *(uint32_t *)(this + 768);
    *(_WORD *)(this + 776) = *(_WORD *)Coord;
    *(uint8_t *)(this + 778) = *(uint8_t *)(Coord + 2);
    v32 = INIClass::ReadInt_Overwrite((int)a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aSparkspawnfram, v31);
    v38 = *(uint32_t *)(this + 772);
    *(uint32_t *)(this + 768) = v32;
    *(uint32_t *)(this + 772) = INIClass::ReadInt_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aLightsize,
    v38);
    v33 = INIClass::ReadBool_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aOneframelight,
    *(uint8_t *)(this + 780));
    v36 = *(double *)(this + 760);
    *(uint8_t *)(this + 780) = v33;
    *(double *)(this + 760) = INIClass::ReadDouble_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aSpawnsparkperc,
    v36);
    return 1;
}

int  ParticleSystemTypeClass::_vt13(int this, int *a2)
{
    int v3; // ecx
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(*(uint32_t *)(this + 660));
    LOBYTE(v3) = *(uint8_t *)(this + 664);
    Power::FlagProcess(a2, v3);
    Power::TimerProcess(*(uint32_t *)(this + 668));
    Checksummer::Add_float((unsigned int *)a2, *(uint32_t *)(this + 672));
    Power::TimerProcess(*(uint32_t *)(this + 676));
    Power::TimerProcess(*(uint32_t *)(this + 680));
    Checksummer::Add_float((unsigned int *)a2, *(uint32_t *)(this + 684));
    Checksummer::Add_float((unsigned int *)a2, *(uint32_t *)(this + 688));
    Power::TimerProcess(*(uint32_t *)(this + 692));
    return Power::TimerProcess(*(uint32_t *)(this + 696));
}

int __stdcall ParticleSystemTypeClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1883112522;
    a2[1] = 298979249;
    a2[2] = 1610642049;
    a2[3] = -1252326136;
    return 0;
}

// 0x006447E0
int __stdcall ParticleSystemTypeClass::SaveLoad_Prefix(uint32_t *a1, int a2)
{
    if ( ObjectTypeClass::LoadCleanup((int)a1, a2) >= 0 && a1 )
    ObjectTypeClass::Construct(a1, (int)&a2);
    *a1 = &ParticleSystemTypeClass::`vftable';
    a1[1] = &ParticleSystemTypeClass::`vftable';
    a1[2] = &ParticleSystemTypeClass::`vftable';
    a1[3] = &ParticleSystemTypeClass::`vftable';
    return 0;
}

// 0x00644830
int __stdcall ParticleSystemTypeClass::SaveLoad_Prefix_0(int a1, int a2, int a3)
{
    AbstractClass::SaveLoad_PrefixWrapper(a1, a2, a3);
    return 0;
}

int ParticleSystemTypeClass::_vt12()
{
    return 784;
}

int ParticleSystemTypeClass::_vt11()
{
    return 25;
}

char __stdcall ParticleSystemTypeClass::_vt32(int a1, int a2)
{
    return 0;
}

int __stdcall ParticleSystemTypeClass::_vt35(int a1)
{
    return 0;
}

void ** ParticleSystemTypeClass::_vt08(void **Block, char a2)
{
    int v3; // eax
    void **v5; // [esp+4h] [ebp-4h] BYREF
    *Block = &ParticleSystemTypeClass::`vftable';
    *(Block + 1) = &ParticleSystemTypeClass::`vftable';
    *(Block + 2) = &ParticleSystemTypeClass::`vftable';
    *(Block + 3) = &ParticleSystemTypeClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    v5 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(dword_A83D68 + 16))(&dword_A83D68, &v5);
    if ( v3 != -1 && v3 < g_InfantryTypeInitState && v3 < --g_InfantryTypeInitState )
    do
    ++v3;
    *((uint32_t *)dword_A83D6C + v3 - 1) = *((uint32_t *)dword_A83D6C + v3);
    while ( v3 < g_InfantryTypeInitState );
    ObjectTypeClass::Destruct((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

