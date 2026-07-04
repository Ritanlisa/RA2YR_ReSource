#include "particlesystemclass.hpp"

void  ParticleSystemClass::_vt03(int this)
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

unsigned int  ParticleSystemClass::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

int  ParticleSystemClass::_vt06(uint32_t *this, int a2)
{
    return *(uint32_t *)(*(this + 1) + 4 * a2);
}

void  ParticleSystemClass::sub_4E8780(int this)
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

unsigned int  ParticleSystemClass::sub_4E87B0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  ParticleSystemClass::_vt01(int *this, int a2)
{
    int v2; // esi
    int v3; // edx
    uint32_t *v4; // eax
    int v5; // ecx
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (uint32_t *)*(this + 1);
    v5 = *(uint32_t *)(a2 + 4) - (uint32_t)v4;
    while ( *v4 == *(uint32_t *)((char *)v4 + v5) )
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  ParticleSystemClass::vt_02_(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v6; // ecx
    int i; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( v4 )
    if ( *((uint32_t *)this + 1) )
    v6 = *((uint32_t *)this + 2);
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
}

void  ParticleSystemClass::vt_03_(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  ParticleSystemClass::vt_04_(int this, uint32_t *a2)
{
    int result; // eax
    int v3; // edx
    uint32_t *i; // ecx
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    v3 = *(uint32_t *)(this + 8);
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(uint32_t **)(this + 4); *i != *a2; ++i )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  ParticleSystemClass::vt_05_(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  ParticleSystemClass::_vt02(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v5; // ecx
    int i; // eax
    int v7; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( !v4 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v5 = *((uint32_t *)this + 2);
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v7 = *((uint32_t *)this + 2);
    if ( v7 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v7;
    return 1;
}

int  ParticleSystemClass::_vt04(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2; ++i )
    if ( ++result >= v2 )
    return -1;
    return result;
}

char  ParticleSystemClass::sub_4EB3E0(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v5; // ecx
    int i; // eax
    int v7; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( !v4 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v5 = *((uint32_t *)this + 2);
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v7 = *((uint32_t *)this + 2);
    if ( v7 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v7;
    return 1;
}

int  ParticleSystemClass::sub_4EB490(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2; ++i )
    if ( ++result >= v2 )
    return -1;
    return result;
}

uint32_t * ParticleSystemClass::vt_00_(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<ParticleClass *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * ParticleSystemClass::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<ParticleClass *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * ParticleSystemClass::sub_4EFDA0(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<SmudgeClass *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  ParticleSystemClass::Constructor(int this, int a2, int *a3, int a4, void *a5, uint32_t *a6, int a7)
{
    uint32_t *v8; // ebp
    int v9; // edx
    int *v10; // eax
    int v11; // eax
    uint32_t *v12; // eax
    uint32_t *v13; // eax
    uint32_t *v14; // eax
    int v15; // ecx
    int v16; // edi
    int v17; // ebp
    int v18; // ebx
    uint32_t *v19; // eax
    int v20; // edx
    int v21; // ecx
    int v22; // eax
    uint8_t v24[12]; // [esp+1Ch] [ebp-Ch] BYREF
    ObjectClass::ctor((uint32_t *)this);
    *(uint32_t *)(this + 172) = a2;
    v8 = (uint32_t *)(this + 212);
    *(uint32_t *)(this + 176) = 0;
    *(uint32_t *)(this + 180) = 0;
    *(uint32_t *)(this + 184) = 0;
    *(uint32_t *)(this + 192) = 0;
    *(uint32_t *)(this + 196) = 0;
    *(uint8_t *)(this + 200) = 1;
    *(uint8_t *)(this + 201) = 0;
    *(uint32_t *)(this + 188) = &DynamicVectorClass<ParticleClass *>::`vftable';
    *(uint32_t *)(this + 208) = 10;
    *(uint32_t *)(this + 204) = 0;
    *(uint32_t *)(this + 212) = dword_AC4A58;
    *(uint32_t *)(this + 216) = dword_AC4A5C;
    v9 = dword_AC4A60;
    v10 = *(int **)(this + 172);
    *(uint32_t *)(this + 224) = 0;
    *(uint32_t *)(this + 220) = v9;
    *(uint32_t *)(this + 228) = 0;
    *(float *)(this + 232) = (float)v10[167];
    *(uint32_t *)(this + 236) = v10[174];
    *(uint32_t *)(this + 240) = v10[192];
    *(uint32_t *)(this + 244) = 29;
    *(uint8_t *)(this + 248) = 0;
    *(uint8_t *)(this + 249) = 0;
    *(uint32_t *)(this + 252) = 0;
    *(uint32_t *)this = &ParticleSystemClass::`vftable';
    *(uint32_t *)(this + 4) = &ParticleSystemClass::`vftable';
    *(uint32_t *)(this + 8) = &ParticleSystemClass::`vftable';
    *(uint32_t *)(this + 12) = &off_7EFB70;
    AbstractClass::GenerateUniqueID(this + 4);
    if ( g_GameCleanupState < dword_A80210
    || (byte_A80215 || !dword_A80210)
    && dword_A8021C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_A80208 + 8))(
    &dword_A80208,
    dword_A80210 + dword_A8021C,
    0) )
    v11 = g_GameCleanupState++;
    *((uint32_t *)dword_A8020C + v11) = this;
    (*(void (__thiscall **)(int))(*(uint32_t *)(this + 188) + 12))(this + 188);
    *(uint32_t *)(this + 252) = a7;
    if ( a4 )
    v12 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)a4 + 72))(a4, v24);
    *v8 = *v12;
    *(uint32_t *)(this + 216) = v12[1];
    *(uint32_t *)(this + 220) = v12[2];
    v13 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)a4 + 72))(a4, v24);
    if ( (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, v13) + 80) & 0x100) != 0
    && (*(int (__thiscall **)(int))(*(uint32_t *)a4 + 44))(a4) == 11 )
    *(uint32_t *)(this + 220) += dword_AC4A8C;
    else
    *v8 = *a6;
    *(uint32_t *)(this + 216) = a6[1];
    *(uint32_t *)(this + 220) = a6[2];
    if ( a5 )
    *(uint32_t *)(this + 224) = a5;
    v14 = AbstractClass::IsTechnoType(a5);
    if ( v14 )
    *(uint32_t *)(this + 228) = v14[173];
    else
    *(uint32_t *)(this + 224) = 0;
    *(uint32_t *)(this + 228) = a4;
    ObjectClass::Deploy((void*374 *)this);
    v15 = *(uint32_t *)(this + 224);
    if ( v15 )
    v16 = *(uint32_t *)(this + 156);
    v17 = *(uint32_t *)(this + 160);
    v18 = *(uint32_t *)(this + 164);
    v19 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)v15 + 72))(v15, v24);
    v20 = v19[1];
    v21 = v19[2];
    *(uint32_t *)(this + 176) = v16 - *v19;
    *(uint32_t *)(this + 180) = v17 - v20;
    *(uint32_t *)(this + 184) = v18 - v21;
    if ( g_AlphaShapePool < dword_B0F728
    || (byte_B0F72D || !dword_B0F728)
    && dword_B0F734 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(AbstractClass_Array + 8))(
    &AbstractClass_Array,
    dword_B0F734 + dword_B0F728,
    0) )
    v22 = g_AlphaShapePool++;
    *((uint32_t *)dword_B0F724 + v22) = this;
    return this;
}

// 0x0062E280
void  ParticleSystemClass::CreateBuildingLight(int *this, int a2, int a3)
{
    int v4; // eax
    double v5; // st7
    double v6; // st6
    int v7; // esi
    uint32_t *v8; // eax
    uint32_t *v9; // esi
    v4 = *(this + 43);
    if ( *(uint8_t *)(v4 + 780) && *(int *)(v4 + 772) > 0 && *(this + 51) > 0 )
    v5 = (double)*(this + 51) / (double)*(int *)(v4 + 676);
    if ( v5 <= 1.0 )
    v6 = v5;
    else
    v6 = 1.0;
    if ( v6 >= 0.4 )
    if ( v5 > 1.0 )
    v5 = 1.0;
    else
    v5 = 0.4;
    v7 = Math::RoundToInt(v5 * (double)*(int *)(v4 + 772));
    v8 = __2_YAPAXI_Z(0x18u);
    if ( v8 )
    v9 = ObjectClass::RegisterInArray(v8, *(this + 39), *(this + 40), *(this + 41), v7);
    else
    v9 = 0;
    v9[3] = *(this + 61);
    BuildingLight::CalculateShading(v9);
    if ( v9 )
    BuildingLightQueue::RemoveEntry(v9);
    __3_YAXPAX_Z(v9);
}

char  ParticleSystemClass::Update(uint8_t *this)
{
    int v2; // eax
    int v3; // eax
    switch ( *(uint32_t *)(*((uint32_t *)this + 43) + 692) )
    case 0:
    UpdateBuildingParticleSystem(this);
    break;
    case 1:
    ParticleSystemClass::UpdateAllParticles(this);
    break;
    case 2:
    UpdateBuildingDamageParticles(this);
    break;
    case 3:
    UpdateProductionParticleSystem(this);
    break;
    case 4:
    ParticleSystemClass::SpawnParticle((int)this);
    break;
    default:
    break;
    v2 = *((uint32_t *)this + 59) - 1;
    *((uint32_t *)this + 59) = v2;
    if ( !v2 )
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)this + 248))(this);
    LOBYTE(v3) = *(this + 144);
    if ( (uint8_t)v3 )
    LOBYTE(v3) = *(this + 248);
    if ( (uint8_t)v3 )
    v3 = *((uint32_t *)this + 51);
    if ( !v3 )
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)this + 212))(this);
    *(this + 144) = 0;
    LOBYTE(v3) = dword_B0F6A0;
    if ( g_LaserDrawConfig < dword_B0F6A0
    || (byte_B0F6A5 || !dword_B0F6A0)
    && dword_B0F6AC > 0
    && (LOBYTE(v3) = (*(int (__thiscall **)(int *, int, uint32_t))(g_DiskLaserManager + 8))(
    &g_DiskLaserManager,
    dword_B0F6A0 + dword_B0F6AC,
    0),
    (uint8_t)v3) )
    v3 = g_LaserDrawConfig++;
    *((uint32_t *)dword_B0F69C + v3) = this;
    return v3;
}

int ParticleSystemClass::_vt30()
{
    return 2;
}

int  ParticleSystemClass::_vt10(int this, int a2, int a3)
{
    int v4; // edx
    int v5; // eax
    int v6; // ecx
    int v7; // ecx
    int result; // eax
    Object::Unlink((void*374 *)this);
    v4 = *(uint32_t *)(this + 188);
    a3 = a2;
    v5 = (*(int (__thiscall **)(int, int *))(v4 + 16))(this + 188, &a3);
    if ( v5 != -1 )
    v6 = *(uint32_t *)(this + 204);
    if ( v5 < v6 )
    v7 = v6 - 1;
    for ( *(uint32_t *)(this + 204) = v7;
    v5 < *(uint32_t *)(this + 204);
    *(uint32_t *)(*(uint32_t *)(this + 192) + 4 * v5 - 4) = *(uint32_t *)(*(uint32_t *)(this + 192) + 4 * v5) )
    ++v5;
    result = 0;
    if ( a2 == *(uint32_t *)(this + 172) )
    *(uint32_t *)(this + 172) = 0;
    if ( a2 == *(uint32_t *)(this + 228) )
    *(uint32_t *)(this + 228) = 0;
    if ( a2 == *(uint32_t *)(this + 224) )
    *(uint8_t *)(this + 248) = 1;
    *(uint32_t *)(this + 224) = 0;
    return result;
}

int __stdcall ParticleSystemClass::vt_06_(int *a1, int *a2, int a3)
{
    int result; // eax
    int v4; // edx
    int i; // ebx
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    v4 = *a2;
    a3 = a1[51];
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v4 + 16))(a2, &a3, 4, 0);
    if ( result >= 0 )
    for ( i = 0; i < a3; ++i )
    result = (*(int (__stdcall **)(int *, int, int, uint32_t))(*a2 + 16))(a2, a1[48] + 4 * i, 4, 0);
    if ( result < 0 )
    break;
    return result;
}

int  ParticleSystemClass::_vt13(int this, unsigned int *a2)
{
    int i; // edi
    int v4; // eax
    int v5; // eax
    int v6; // eax
    int v7; // eax
    int v8; // eax
    int v10; // [esp-4h] [ebp-10h]
    HouseClass::ProcessPower((void*374 *)this);
    for ( i = 0; i < *(uint32_t *)(this + 204); ++i )
    v10 = *(uint32_t *)(*(uint32_t *)(this + 192) + 4 * i) + 4;
    v4 = (*(int (__stdcall **)(int))(*(uint32_t *)v10 + 16))(v10);
    Power::TimerProcess(v4);
    v5 = *(uint32_t *)(this + 224);
    if ( v5 )
    v6 = (*(int (__stdcall **)(int))(*(uint32_t *)(v5 + 4) + 16))(v5 + 4);
    Power::TimerProcess(v6);
    v7 = *(uint32_t *)(this + 228);
    if ( v7 )
    v8 = (*(int (__stdcall **)(int))(*(uint32_t *)(v7 + 4) + 16))(v7 + 4);
    Power::TimerProcess(v8);
    Checksummer::Add_float(a2, *(uint32_t *)(this + 232));
    return Power::TimerProcess(*(uint32_t *)(this + 236));
}

void  ParticleSystemClass::_vt62(uint8_t *this)
{
    *(this + 248) = 1;
}

int ParticleSystemClass::_vt12()
{
    return 256;
}

int ParticleSystemClass::_vt11()
{
    return 24;
}

int  ParticleSystemClass::_vt34(uint32_t *this)
{
    return *(this + 43);
}

