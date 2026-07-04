#include "particletypeclass.hpp"

void  ParticleTypeClass::_vt03(int this)
{
    void *v2; // eax
    v2 = *(void **)(this + 4);
    *(uint32_t *)(this + 16) = 0;
    if ( v2 && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(v2);
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

unsigned int  ParticleTypeClass::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (a2 - *(uint32_t *)(this + 4)) / 3u;
    else
    return 0;
}

uint32_t * ParticleTypeClass::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<RGBClass>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char  ParticleTypeClass::_vt02(void *this, int a2, char *a3)
{
    int v3; // ebp
    char *v5; // edi
    char *v6; // eax
    uint8_t *v7; // ecx
    int v8; // edx
    uint8_t *v9; // eax
    int v10; // ecx
    int v11; // ecx
    int v12; // eax
    int v13; // edx
    char *v14; // ebx
    int v15; // eax
    v3 = a2;
    if ( a2 )
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    if ( a2 - 1 >= 0 )
    v9 = a3 + 2;
    v10 = a2;
    do
    *(v9 - 2) = 0;
    *(v9 - 1) = 0;
    *v9 = 0;
    v9 += 3;
    --v10;
    while ( v10 );
    else
    v6 = (char *)__2_YAPAXI_Z(3 * a2);
    if ( v6 )
    if ( a2 - 1 >= 0 )
    v7 = v6 + 2;
    v8 = a2;
    do
    *(v7 - 2) = 0;
    *(v7 - 1) = 0;
    *v7 = 0;
    v7 += 3;
    --v8;
    while ( v8 );
    v5 = v6;
    else
    v5 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( !v5 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v11 = *((uint32_t *)this + 2);
    if ( a2 < v11 )
    v11 = a2;
    if ( v11 > 0 )
    v12 = 0;
    do
    v13 = *((uint32_t *)this + 1) + v12;
    v14 = &v5[v12];
    v12 += 3;
    --v11;
    *(_WORD *)v14 = *(_WORD *)v13;
    v14[2] = *(uint8_t *)(v13 + 2);
    while ( v11 );
    v3 = a2;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v5;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v15 = *((uint32_t *)this + 2);
    if ( v15 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v15;
    return 1;
}

int  ParticleTypeClass::_vt04(int *this, uint8_t *a2)
{
    int v2; // esi
    int result; // eax
    uint8_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint8_t *)*(this + 1); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 )
    if ( ++result >= v2 )
    return -1;
    return result;
}

char  ParticleTypeClass::LoadFromINI(int this, unsigned __int8 ***a2)
{
    unsigned __int8 *inited; // eax
    uint32_t *RGBColorList; // ebp
    int Int_Overwrite; // eax
    int v6; // eax
    int v7; // ebp
    int v8; // eax
    int v9; // eax
    int v10; // ecx
    int v11; // eax
    int v12; // eax
    double v13; // st7
    double v14; // st7
    int v15; // eax
    int v16; // eax
    char v17; // cl
    char Bool_Overwrite; // al
    char v19; // al
    char v20; // al
    char v21; // cl
    char v22; // al
    double v23; // rax
    int v24; // ecx
    int v25; // eax
    int v26; // eax
    int v27; // ecx
    int *Coord2; // eax
    int Coord; // eax
    int v30; // eax
    int v31; // ebp
    uint32_t *v32; // eax
    uint32_t *v33; // eax
    int v34; // ecx
    uint32_t *v35; // edx
    int v36; // ebx
    const void **v37; // edi
    void *v39; // [esp-10h] [ebp-F4h]
    int v40; // [esp-Ch] [ebp-F0h]
    __int16 v41; // [esp-8h] [ebp-ECh]
    int v42; // [esp-4h] [ebp-E8h]
    int v43; // [esp+0h] [ebp-E4h]
    int v44; // [esp+4h] [ebp-E0h]
    int v45; // [esp+4h] [ebp-E0h]
    int v46; // [esp+4h] [ebp-E0h]
    int v47; // [esp+4h] [ebp-E0h]
    int v48; // [esp+4h] [ebp-E0h]
    int v49; // [esp+4h] [ebp-E0h]
    int v50; // [esp+4h] [ebp-E0h]
    int v51; // [esp+4h] [ebp-E0h]
    uint8_t v52[4]; // [esp+18h] [ebp-CCh] BYREF
    char Source[32]; // [esp+1Ch] [ebp-C8h] BYREF
    int v54[7]; // [esp+3Ch] [ebp-A8h] BYREF
    int v55[3]; // [esp+58h] [ebp-8Ch] BYREF
    char Destination[128]; // [esp+64h] [ebp-80h] BYREF
    INIClass::ResetSection(a2);
    if ( !ObjectTypeClass::LoadFromINI((char *)this, a2) )
    return 0;
    ParticleTypeClass::Constructor(0, 0);
    inited = (unsigned __int8 *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(this + 36));
    RGBColorList = (uint32_t *)INIClass::ReadRGBColorList(
    a2,
    (int)v54,
    inited,
    (unsigned __int8 *)aColorlist,
    &TypeList<RGBClass>::`vftable',
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
    ParticleTypeClass::EnsureCapacity(RGBColorList);
    *(uint32_t *)(this + 712) = RGBColorList[4];
    *(uint32_t *)(this + 716) = RGBColorList[5];
    *(uint32_t *)(this + 720) = RGBColorList[6];
    v54[0] = (int)&VectorClass<RGBClass>::`vftable';
    FilePipe_38_::ddtor(v54);
    Int_Overwrite = INIClass::ReadInt_Overwrite(this + 36, aMaxdc, *(uint32_t *)(this + 732));
    v45 = *(uint32_t *)(this + 736);
    *(uint32_t *)(this + 732) = Int_Overwrite;
    *(uint32_t *)(this + 736) = INIClass::ReadInt_Overwrite(this + 36, aMaxec, v45);
    v6 = INIClass::ReadInt_Overwrite(this + 36, g_INI_Key_Damage, *(uint32_t *)(this + 744));
    v7 = *(uint32_t *)(this + 740);
    *(uint32_t *)(this + 744) = v6;
    if ( INIClass::GetString(
    a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)g_INI_Key_Warhead,
    &g_INI_DefaultBuffer,
    Destination,
    128) )
    v8 = WarheadTypeClass::FindOrCreate(Destination);
    else
    v8 = v7;
    v46 = *(uint32_t *)(this + 748);
    *(uint32_t *)(this + 740) = v8;
    *(uint32_t *)(this + 748) = INIClass::ReadInt_Overwrite(this + 36, aStartframe, v46);
    v9 = INIClass::ReadInt_Overwrite(this + 36, aNumloopframes, *(uint32_t *)(this + 752));
    v10 = *(uint32_t *)(this + 756);
    *(uint32_t *)(this + 752) = v9;
    v11 = INIClass::ReadInt_Overwrite(this + 36, aTranslucency, v10);
    v47 = *(uint32_t *)(this + 760);
    *(uint32_t *)(this + 756) = v11;
    v12 = INIClass::ReadInt_Overwrite(this + 36, aWindeffect, v47);
    v13 = *(float *)(this + 764);
    *(uint32_t *)(this + 760) = v12;
    INIClass::ReadDouble_Overwrite(this + 36, (int)aVelocity, v13);
    *(float *)(this + 764) = v13;
    v14 = *(float *)(this + 768);
    INIClass::ReadDouble_Overwrite(this + 36, (int)aDeacc, v14);
    v15 = *(uint32_t *)(this + 772);
    *(float *)(this + 768) = v14;
    v16 = INIClass::ReadInt_Overwrite(this + 36, aRadius, v15);
    v17 = *(uint8_t *)(this + 776);
    *(uint32_t *)(this + 772) = v16;
    Bool_Overwrite = INIClass::ReadBool_Overwrite(this + 36, aDeleteonstatel, v17);
    v48 = *(char *)(this + 777);
    *(uint8_t *)(this + 776) = Bool_Overwrite;
    *(uint8_t *)(this + 777) = INIClass::ReadInt_Overwrite(this + 36, aEndstateai, v48);
    v19 = INIClass::ReadInt_Overwrite(this + 36, aStartstateai, *(char *)(this + 778));
    v49 = *(char *)(this + 779);
    *(uint8_t *)(this + 778) = v19;
    *(uint8_t *)(this + 779) = INIClass::ReadInt_Overwrite(this + 36, aStateaiadvance, v49);
    *(uint8_t *)(this + 782) = INIClass::ReadInt_Overwrite(this + 36, aTranslucent50s, *(unsigned __int8 *)(this + 782));
    v20 = INIClass::ReadInt_Overwrite(this + 36, aTranslucent25s, *(unsigned __int8 *)(this + 781));
    v21 = *(uint8_t *)(this + 783);
    *(uint8_t *)(this + 781) = v20;
    v22 = INIClass::ReadBool_Overwrite(this + 36, g_INI_Key_Normalized, v21);
    HIDWORD(v23) = *(uint32_t *)(this + 692);
    *(uint8_t *)(this + 783) = v22;
    LODWORD(v23) = *(uint32_t *)(this + 688);
    INIClass::ReadDouble_Overwrite(this + 36, (int)aColorspeed, v23);
    v24 = *(uint32_t *)(this + 672);
    *(double *)(this + 688) = v14;
    v25 = INIClass::ReadInt_Overwrite(this + 36, aXvelocity, v24);
    v50 = *(uint32_t *)(this + 676);
    *(uint32_t *)(this + 672) = v25;
    *(uint32_t *)(this + 676) = INIClass::ReadInt_Overwrite(this + 36, aYvelocity, v50);
    v26 = INIClass::ReadInt_Overwrite(this + 36, aMinzvelocity, *(uint32_t *)(this + 680));
    v27 = *(uint32_t *)(this + 684);
    *(uint32_t *)(this + 680) = v26;
    *(uint32_t *)(this + 684) = INIClass::ReadInt_Overwrite(this + 36, aZvelocityrange, v27);
    Coord2 = INIClass::GetCoord2(
    a2,
    v55,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aNextparticleof,
    (int *)(this + 660));
    *(uint32_t *)(this + 660) = *Coord2;
    *(uint32_t *)(this + 664) = Coord2[1];
    *(uint32_t *)(this + 668) = Coord2[2];
    Coord = INIClass::GetCoord(
    a2,
    (int)v52,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aStartcolor1,
    (unsigned __int8 *)(this + 724));
    *(_WORD *)(this + 724) = *(_WORD *)Coord;
    *(uint8_t *)(this + 726) = *(uint8_t *)(Coord + 2);
    v30 = INIClass::GetCoord(
    a2,
    (int)v52,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aStartcolor2,
    (unsigned __int8 *)(this + 727));
    v51 = *(char *)(this + 777);
    *(_WORD *)(this + 727) = *(_WORD *)v30;
    *(uint8_t *)(this + 729) = *(uint8_t *)(v30 + 2);
    *(uint8_t *)(this + 780) = INIClass::ReadInt_Overwrite(this + 36, aFinaldamagesta, v51);
    if ( INIClass::GetString(a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aNextparticle, 0, Source, 32) )
    if ( _strcmpi(Source, g_Str__none_) )
    v31 = 0;
    if ( g_BuildingTypeInitState <= 0 )
    LABEL_10:
    v32 = __2_YAPAXI_Z(0x318u);
    if ( v32 )
    v33 = BuildingTypeClass::Construct(v32, Source);
    else
    v33 = 0;
    v34 = 0;
    if ( g_BuildingTypeInitState <= 0 )
    LABEL_17:
    v34 = -1;
    else
    v35 = g_BuildingProductionQueue;
    while ( (uint32_t *)*v35 != v33 )
    ++v34;
    ++v35;
    if ( v34 >= g_BuildingTypeInitState )
    goto LABEL_17;
    v31 = v34;
    else
    while ( _strcmpi(Source, (const void *)(*((uint32_t *)g_BuildingProductionQueue + v31) + 36)) )
    if ( ++v31 >= g_BuildingTypeInitState )
    goto LABEL_10;
    else
    v31 = -1;
    *(uint32_t *)(this + 784) = v31;
    Source[0] = 0;
    INIClass::GetString(a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aBehaveslike, 0, Source, 32);
    v36 = 0;
    v37 = (const void **)off_8370BC;
    while ( _strcmpi(Source, *v37) )
    ++v37;
    ++v36;
    if ( (int)v37 >= (int)&ParticleTypeClass `RTTI Type Descriptor' )
    v36 = -1;
    break;
    *(uint32_t *)(this + 788) = v36;
    return 1;
}

// 0x006454E0
int  ParticleTypeClass::ProcessPower(int this, int *a2)
{
    int v3; // ecx
    int v4; // edx
    int v5; // eax
    int v6; // ecx
    int v7; // ecx
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(*(uint32_t *)(this + 732));
    Power::TimerProcess(*(uint32_t *)(this + 736));
    Power::TimerProcess(*(uint32_t *)(this + 744));
    Power::TimerProcess(*(uint32_t *)(this + 748));
    Power::TimerProcess(*(uint32_t *)(this + 752));
    Power::TimerProcess(*(uint32_t *)(this + 756));
    Power::TimerProcess(*(uint32_t *)(this + 760));
    Checksummer::Add_float(*(uint32_t *)(this + 764));
    Checksummer::Add_float(*(uint32_t *)(this + 768));
    Power::TimerProcess(*(uint32_t *)(this + 772));
    LOBYTE(v3) = *(uint8_t *)(this + 776);
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = *(uint8_t *)(this + 777);
    v5 = Power::FinalizeDrain(a2, v4);
    LOBYTE(v5) = *(uint8_t *)(this + 778);
    Power::FinalizeDrain(a2, v5);
    LOBYTE(v6) = *(uint8_t *)(this + 779);
    Power::FinalizeDrain(a2, v6);
    Power::TimerProcess(*(unsigned __int8 *)(this + 781));
    Power::TimerProcess(*(unsigned __int8 *)(this + 782));
    LOBYTE(v7) = *(uint8_t *)(this + 783);
    Power::FlagProcess(a2, v7);
    Power::TimerProcess(*(uint32_t *)(this + 784));
    Power::TimerProcess(*(uint32_t *)(this + 788));
    return Checksummer::Add_double(*(uint32_t *)(this + 688), *(uint32_t *)(this + 692));
}

// 0x00645660
int __stdcall ParticleTypeClass::SaveLoad_Prefix(int a1, int a2)
{
    int *v2; // ebp
    int v3; // edi
    int result; // eax
    int v5; // edx
    int v6; // ecx
    int v7; // ecx
    int v8; // eax
    int v9; // eax
    int v10; // ecx
    int v11; // edx
    int v12; // eax
    int v13; // edx
    int v14; // [esp+28h] [ebp-4h]
    v2 = (int *)a2;
    v3 = a1;
    result = ObjectTypeClass::LoadCleanup(a1, a2);
    if ( result >= 0 )
    if ( v3 )
    ObjectTypeClass::Construct((uint32_t *)v3, (int)&a2);
    ParticleTypeClass::Constructor((uint32_t *)(v3 + 696), 0, 0);
    *(uint32_t *)(v3 + 696) = &TypeList<RGBClass>::`vftable';
    *(uint32_t *)v3 = &ParticleTypeClass::`vftable';
    *(uint32_t *)(v3 + 4) = &ParticleTypeClass::`vftable';
    *(uint32_t *)(v3 + 8) = &ParticleTypeClass::`vftable';
    *(uint32_t *)(v3 + 12) = &ParticleTypeClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v3 + 740));
    v5 = *v2;
    a1 = 0;
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v5 + 12))(v2, &a1, 4, 0);
    if ( result >= 0 )
    v14 = 0;
    if ( a1 <= 0 )
    LABEL_14:
    ObjectTypeClass::Load2DArt((char *)v3);
    return 0;
    else
    while ( 1 )
    v6 = *v2;
    LOWORD(a2) = 0;
    BYTE2(a2) = 0;
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v6 + 12))(v2, &a2, 3, 0);
    if ( result < 0 )
    break;
    v7 = *(uint32_t *)(v3 + 704);
    if ( *(uint32_t *)(v3 + 712) < v7
    || (*(uint8_t *)(v3 + 709) || !v7)
    && (v8 = *(uint32_t *)(v3 + 716), v8 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(v3 + 696) + 8))(v3 + 696, v7 + v8, 0) )
    v9 = *(uint32_t *)(v3 + 712);
    v10 = v9 + 1;
    v11 = 3 * v9;
    v12 = *(uint32_t *)(v3 + 700);
    *(uint32_t *)(v3 + 712) = v10;
    v13 = v12 + v11;
    *(_WORD *)v13 = a2;
    *(uint8_t *)(v13 + 2) = BYTE2(a2);
    if ( ++v14 >= a1 )
    goto LABEL_14;
    return result;
}

// 0x006457A0
int __stdcall ParticleTypeClass::SaveLoad_Prefix_0(int a1, int a2, int a3)
{
    int result; // eax
    int v4; // edx
    int v5; // ebp
    int v6; // edi
    result = AbstractClass::SaveLoad_PrefixWrapper(a1, a2, a3);
    if ( result >= 0 )
    v4 = *(uint32_t *)a2;
    a3 = *(uint32_t *)(a1 + 712);
    result = (*(int (__stdcall **)(int, int *, int, uint32_t))(v4 + 16))(a2, &a3, 4, 0);
    if ( result >= 0 )
    v5 = 0;
    if ( a3 > 0 )
    v6 = 0;
    do
    if ( (*(int (__stdcall **)(int, int, int, uint32_t))(*(uint32_t *)a2 + 16))(a2, v6 + *(uint32_t *)(a1 + 700), 3, 0) < 0 )
    break;
    ++v5;
    v6 += 3;
    while ( v5 < a3 );
    return 0;
    return result;
}

int  ParticleTypeClass::_vt10(uint32_t *this, int a2, int a3)
{
    int result; // eax
    result = *(this + 185);
    if ( result == a2 )
    *(this + 185) = 0;
    return result;
}

int ParticleTypeClass::_vt12()
{
    return 792;
}

int ParticleTypeClass::_vt11()
{
    return 23;
}

char __stdcall ParticleTypeClass::_vt32(int a1, int a2)
{
    return 0;
}

int __stdcall ParticleTypeClass::_vt35(int a1)
{
    return 0;
}

void ** ParticleTypeClass::_vt08(void **Block, char a2)
{
    int v3; // eax
    int v4; // eax
    void *v5; // eax
    void **v7; // [esp+4h] [ebp-4h] BYREF
    *Block = &ParticleTypeClass::`vftable';
    *(Block + 1) = &ParticleTypeClass::`vftable';
    *(Block + 2) = &ParticleTypeClass::`vftable';
    *(Block + 3) = &ParticleTypeClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    v7 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v7);
    if ( v3 != -1 && v3 < g_AnimManager && v3 < --g_AnimManager )
    do
    ++v3;
    *((uint32_t *)g_AnimPoolCount + v3 - 1) = *((uint32_t *)g_AnimPoolCount + v3);
    while ( v3 < g_AnimManager );
    v7 = Block;
    v4 = (*(int (__thiscall **)(int *, void ***))(dword_A83D98 + 16))(&dword_A83D98, &v7);
    if ( v4 != -1 && v4 < g_BuildingTypeInitState && v4 < --g_BuildingTypeInitState )
    do
    ++v4;
    *((uint32_t *)g_BuildingProductionQueue + v4 - 1) = *((uint32_t *)g_BuildingProductionQueue + v4);
    while ( v4 < g_BuildingTypeInitState );
    v5 = *(Block + 175);
    *(Block + 174) = &VectorClass<RGBClass>::`vftable';
    if ( v5 && *((uint8_t *)Block + 709) )
    __3_YAXPAX_Z(v5);
    *(Block + 175) = 0;
    *((uint8_t *)Block + 709) = 0;
    *(Block + 176) = 0;
    ObjectTypeClass::Destruct((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

